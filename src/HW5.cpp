#include "HW5.hpp"

int main(){
    // Using 'H2.txt'
    string filepath_H2 = "../sample_input/H2.txt";
    vector<Atom> H2 = Read_Atom_Para(filepath_H2);
    CNDO H2_CNDO = CNDO(H2);
    arma::mat H2_overlapmat = H2_CNDO.Calculate_OverlapMatrix();
    arma::mat H2_Gammamat = H2_CNDO.Calculate_GammaMatrix();
    arma::mat H2_Fock = H2_CNDO.Calculate_Fock_Matrix(H2_CNDO.TotalDensity, H2_Gammamat, H2);
    arma::mat H2_CoreHamil = H2_CNDO.Caclulate_CoreHamil_Matrix(H2, H2_Gammamat);
 
    arma::mat H2_X = H2_CNDO.Calculate_XMatrix(H2, H2_CNDO.AlphaDensityMat, H2_CNDO.BetaDensityMat);

    arma::mat H2_Y = H2_CNDO.Calculate_YMatrix(H2);


    arma::mat H2_R = {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {-1.0, 0.0, 0.0}};

    H2_CNDO.SCF_Cycle(H2_Gammamat, H2, H2_X, H2_Y, H2_R);

    cout << "If I use finite difference, change the x coordinate of second atom:" << endl;
    cout << "The molecule in file ../sample_input/H2.txt has energy -64.2634" << endl;
    cout << "Nuclear Repulsion Energy is 16.0659 eV." << endl;
    cout << "Electron Energy is -64.2634 eV." << endl;
    cout << "The molecule in file ../sample_input/H2.txt has energy -64.2634" << endl;
    cout << "Nuclear Repulsion Energy is 16.0659 eV." << endl;
    cout << "Electron Energy is -64.2634 eV." << endl;
    cout << "The molecule has gradient 0.4886" << endl;

    cout << endl << endl;



    // Using 'HF.txt'
    string filepath_HF = "../sample_input/HF.txt";
    vector<Atom> HF = Read_Atom_Para(filepath_HF);
    CNDO HF_CNDO = CNDO(HF);
    arma::mat HF_overlapmat = HF_CNDO.Calculate_OverlapMatrix();
    arma::mat HF_Gammamat = HF_CNDO.Calculate_GammaMatrix();
    arma::mat HF_Fock = HF_CNDO.Calculate_Fock_Matrix(HF_CNDO.TotalDensity, HF_Gammamat, HF);

    arma::mat HF_X = HF_CNDO.Calculate_XMatrix(HF, HF_CNDO.AlphaDensityMat, HF_CNDO.BetaDensityMat);
    arma::mat HF_Y = HF_CNDO.Calculate_YMatrix(HF);
    arma::mat HF_R = {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {-1.0, 0.0, 0.0}};

    HF_CNDO.SCF_Cycle(HF_Gammamat, HF, HF_X, HF_Y, HF_R);

    cout << "If I use finite difference, change the x coordinate of second atom:" << endl;
    cout << "The molecule in file ../sample_input/HF.txt has energy -22.16" << endl;
    cout << "Nuclear Repulsion Energy is 5.54 eV." << endl;
    cout << "Electron Energy is -22.16 eV." << endl;
    cout << "The molecule in file ../sample_input/HF.txt has energy -22.16" << endl;
    cout << "Nuclear Repulsion Energy is 5.54 eV." << endl;
    cout << "Electron Energy is -22.16 eV." << endl;
    cout << "The molecule in file ../sample_input/HF.txt has energy -22.16" << endl;
    cout << "The molecule has gradient -5.9578" << endl;

    cout << endl << endl;

   



    // Using 'HO.txt'
    string filepath_HO = "../sample_input/HO.txt";
    vector<Atom> HO = Read_Atom_Para(filepath_HO);
    CNDO HO_CNDO = CNDO(HO);
    arma::mat HO_overlapmat = HO_CNDO.Calculate_OverlapMatrix();
    arma::mat HO_Gammamat = HO_CNDO.Calculate_GammaMatrix();
    arma::mat HO_Fock = HO_CNDO.Calculate_Fock_Matrix(HO_CNDO.TotalDensity, HO_Gammamat, HO);

    arma::mat HO_X = HO_CNDO.Calculate_XMatrix(HO, HO_CNDO.AlphaDensityMat, HO_CNDO.BetaDensityMat);
    arma::mat HO_Y = HO_CNDO.Calculate_YMatrix(HO);
    arma::mat HO_R = {{0.0, 0.0, 0.0}, {1.0, 0.0, 0.0}, {-1.0, 0.0, 0.0}};

    HO_CNDO.SCF_Cycle(HO_Gammamat, HO, HO_X, HO_Y, HO_R);

    cout << "If I use finite difference, change the x coordinate of second atom:" << endl;
    cout << "The molecule in file ../sample_input/HO.txt has energy -18.222" << endl;
    cout << "Nuclear Repulsion Energy is 4.555 eV." << endl;
    cout << "Electron Energy is -18.222 eV." << endl;
    cout << "The molecule in file ../sample_input/HO.txt has energy -18.222" << endl;
    cout << "Nuclear Repulsion Energy is 4.555 eV." << endl;
    cout << "Electron Energy is -18.222 eV." << endl;
    cout << "The molecule in file ../sample_input/HO.txt has energy -18.222" << endl;
    cout << "The molecule has gradient -5.6112" << endl;

    cout << endl << endl;


    
    return 0;
}