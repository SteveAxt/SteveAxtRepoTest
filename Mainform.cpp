//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Mainform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender)
{
  Label1->Caption = "This is a label";
}
//---------------------------------------------------------------------------

