#include <iostream>                 //基本的输入输出
#include <fstream>                  //文件流需要的头文件
#include <string>                   //用字符串需要的头文件
#include <sstream>                  //字符串流stringstream需要的头文件
using namespace std;
int main()
{
    string line;
    string SUBCKT = ".SUBCKT";
    string A = " A ";
    string A1 = " A1 ";
    string A2 = " A2 ";
    string A3 = " A3 ";
    string A4 = " A4 ";
    string A5 = " A5 ";
    string A6 = " A6 ";
    string B = " B ";
    string B1 = " B1 ";
    string B2 = " B2 ";
    string B3 = " B3 ";
    string C = " C ";
    string C1 = " C1 ";
    string C2 = " C2 ";
    string CI = " CI ";
    string CIN = " CIN ";
    string CI0N = " CI0N ";
    string CI1N = " CI1N ";
    string CI0 = " CI0 ";
    string CI1 = " CI1 ";
    string CS = " CS ";
    string CK = " CK ";
    string CKN = " CKN ";
    string CO = " CO ";
    string CON = " CON ";
    string CO0 = " CO0 ";
    string CO1 = " CO1 ";
    string CO0N = " CO0N ";
    string CO1N = " CO1N ";
    string D = " D ";
    string DA = " DA ";
    string DB = " DB ";
    string E = " E ";
    string EN = " EN ";
    string F = " F ";
    string I = " I ";
    string I0 = " I0 ";
    string I1 = " I1 ";
    string I2 = " I2 ";
    string I3 = " I3 ";
    string ICO = " ICO ";
    string MI0 = " MI0 ";
    string MI1 = " MI1 ";
    string MI2 = " MI2 ";
    string OE = " OE ";
    string PP = " PP ";
    string Q = " Q ";
    string QN = " QN ";
    string RN = " RN ";
    string RDN = " RDN ";
    string S0 = " S0 ";
    string S1 = " S1 ";
    string SA = " SA ";
    string SN = " SN ";
    string SDN = " SDN ";
    string SI = " SI ";
    string SE = " SE ";
    string S = " S ";
    string TE = " TE ";
    string VDD = " VDD ";
    string VSS = " VSS ";
    string VPW = " VPW";
    string VNW = " VNW ";
    string X2 = " X2 ";
    string Z = " Z ";
    string ZN = " ZN ";
    int sel = 0;
    ifstream srcfile("scc55nll_vhs_lvt_3.cdl",ios::in);

    if(!srcfile){
        cout<<"error opening the file"<<endl;
        return 0;
    }

    ofstream desfile("scc55nll_vhs_lvt_4.cdl",ios::out);

    if(!desfile){
        srcfile.close();
        cout<<"error opening the file"<<endl;
        return 0;
    }

    while(getline(srcfile,line)){
        desfile<<line<<endl;
        string::size_type idx;
        idx=line.find(SUBCKT);
        if(idx == string::npos);
        else{
            desfile<<"*.PININFO ";
            sel = 1;
        }
       if(sel == 1){
            idx=line.find(A);
            if(idx == string::npos);
            else{
                desfile<<"A:I ";
            }
            idx=line.find(A1);
            if(idx == string::npos);
            else{
                desfile<<"A1:I ";
            }
            idx=line.find(A2);
            if(idx == string::npos);
            else{
                desfile<<"A2:I ";
            }
            idx=line.find(A3);
            if(idx == string::npos);
            else{
                desfile<<"A3:I ";
            }
            idx=line.find(A4);
            if(idx == string::npos);
            else{
                desfile<<"A4:I ";
            }
            idx=line.find(A5);
            if(idx == string::npos);
            else{
                desfile<<"A5:I ";
            }
            idx=line.find(A6);
            if(idx == string::npos);
            else{
                desfile<<"A6:I ";
            }
            idx=line.find(B);
            if(idx == string::npos);
            else{
                desfile<<"B:I ";
            }
            idx=line.find(B1);
            if(idx == string::npos);
            else{
                desfile<<"B1:I ";
            }
            idx=line.find(B2);
            if(idx == string::npos);
            else{
                desfile<<"B2:I ";
            }
            idx=line.find(B3);
            if(idx == string::npos);
            else{
                desfile<<"B3:I ";
            }
            idx=line.find(C);
            if(idx == string::npos);
            else{
                desfile<<"C:I ";
            }
            idx=line.find(C1);
            if(idx == string::npos);
            else{
                desfile<<"C1:I ";
            }
            idx=line.find(C2);
            if(idx == string::npos);
            else{
                desfile<<"C2:I ";
            }
            idx=line.find(CI);
            if(idx == string::npos);
            else{
                desfile<<"CI:I ";
            }
            idx=line.find(CIN);
            if(idx == string::npos);
            else{
                desfile<<"CIN:I ";
            }
            idx=line.find(CI0N);
            if(idx == string::npos);
            else{
                desfile<<"CI0N:I ";
            }
            idx=line.find(CI1N);
            if(idx == string::npos);
            else{
                desfile<<"CI1N:I ";
            }
            idx=line.find(CI0);
            if(idx == string::npos);
            else{
                desfile<<"CI0:I ";
            }
            idx=line.find(CI1);
            if(idx == string::npos);
            else{
                desfile<<"CI1:I ";
            }
            idx=line.find(CS);
            if(idx == string::npos);
            else{
                desfile<<"CS:I ";
            }
            idx=line.find(CK);
            if(idx == string::npos);
            else{
                desfile<<"CK:I ";
            }
            idx=line.find(CKN);
            if(idx == string::npos);
            else{
                desfile<<"CKN:I ";
            }
            idx=line.find(D);
            if(idx == string::npos);
            else{
                desfile<<"D:I ";
            }
            idx=line.find(DA);
            if(idx == string::npos);
            else{
                desfile<<"DA:I ";
            }
            idx=line.find(DB);
            if(idx == string::npos);
            else{
                desfile<<"DB:I ";
            }
            idx=line.find(E);
            if(idx == string::npos);
            else{
                desfile<<"E:I ";
            }
            idx=line.find(F);
            if(idx == string::npos);
            else{
                desfile<<"F:I ";
            }
            idx=line.find(EN);
            if(idx == string::npos);
            else{
                desfile<<"EN:I ";
            }
            idx=line.find(I);
            if(idx == string::npos);
            else{
                desfile<<"I:I ";
            }
            idx=line.find(I0);
            if(idx == string::npos);
            else{
                desfile<<"I0:I ";
            }
            idx=line.find(I1);
            if(idx == string::npos);
            else{
                desfile<<"I1:I ";
            }
            idx=line.find(I2);
            if(idx == string::npos);
            else{
                desfile<<"I2:I ";
            }
            idx=line.find(I3);
            if(idx == string::npos);
            else{
                desfile<<"I3:I ";
            }
            idx=line.find(MI0);
            if(idx == string::npos);
            else{
                desfile<<"MI0:I ";
            }
            idx=line.find(MI1);
            if(idx == string::npos);
            else{
                desfile<<"MI1:I ";
            }
            idx=line.find(MI2);
            if(idx == string::npos);
            else{
                desfile<<"MI2:I ";
            }
            idx=line.find(OE);
            if(idx == string::npos);
            else{
                desfile<<"OE:I ";
            }
            idx=line.find(RN);
            if(idx == string::npos);
            else{
                desfile<<"RN:I ";
            }
            idx=line.find(RDN);
            if(idx == string::npos);
            else{
                desfile<<"RDN:I ";
            }
            idx=line.find(S);
            if(idx == string::npos);
            else{
                desfile<<"S:O ";
            }
            idx=line.find(S0);
            if(idx == string::npos);
            else{
                desfile<<"S0:I ";
            }
            idx=line.find(S1);
            if(idx == string::npos);
            else{
                desfile<<"S1:I ";
            }
            idx=line.find(SA);
            if(idx == string::npos);
            else{
                desfile<<"SA:I ";
            }
            idx=line.find(SN);
            if(idx == string::npos);
            else{
                desfile<<"SN:I ";
            }
            idx=line.find(SDN);
            if(idx == string::npos);
            else{
                desfile<<"SDN:I ";
            }
            idx=line.find(SI);
            if(idx == string::npos);
            else{
                desfile<<"SI:I ";
            }
            idx=line.find(SE);
            if(idx == string::npos);
            else{
                desfile<<"SE:I ";
            }
            idx=line.find(TE);
            if(idx == string::npos);
            else{
                desfile<<"TE:I ";
            }
            idx=line.find(CO);
            if(idx == string::npos);
            else{
                desfile<<"CO:O ";
            }
            idx=line.find(CON);
            if(idx == string::npos);
            else{
                desfile<<"CON:O ";
            }
            idx=line.find(CO0);
            if(idx == string::npos);
            else{
                desfile<<"CO0:O ";
            }
            idx=line.find(CO1);
            if(idx == string::npos);
            else{
                desfile<<"CO1:O ";
            }
            idx=line.find(CO0N);
            if(idx == string::npos);
            else{
                desfile<<"CO0N:O ";
            }
            idx=line.find(CO1N);
            if(idx == string::npos);
            else{
                desfile<<"CO1N:O ";
            }
            idx=line.find(ICO);
            if(idx == string::npos);
            else{
                desfile<<"ICO:O ";
            }
            idx=line.find(PP);
            if(idx == string::npos);
            else{
                desfile<<"PP:O ";
            }
            idx=line.find(Q);
            if(idx == string::npos);
            else{
                desfile<<"Q:O ";
            }
            idx=line.find(QN);
            if(idx == string::npos);
            else{
                desfile<<"QN:O ";
            }
            idx=line.find(X2);
            if(idx == string::npos);
            else{
                desfile<<"X2:O ";
            }
            idx=line.find(Z);
            if(idx == string::npos);
            else{
                desfile<<"Z:O ";
            }
            idx=line.find(ZN);
            if(idx == string::npos);
            else{
                desfile<<"ZN:O ";
            }
            idx=line.find(VDD);
            if(idx == string::npos);
            else{
                desfile<<"VDD:B ";
            }
            idx=line.find(VSS);
            if(idx == string::npos);
            else{
                desfile<<"VSS:B ";
            }
            idx=line.find(VNW);
            if(idx == string::npos);
            else{
                desfile<<"VNW:B ";
            }
            idx=line.find(VPW);
            if(idx == string::npos);
            else{
                desfile<<"VPW:B"<<endl;
                sel=0;
            }
        }
       else;
    }


    srcfile.close();
    desfile.close();
    return 0;
}