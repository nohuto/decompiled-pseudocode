CCD_BTL *__fastcall CCD_BTL::`vector deleting destructor'(CCD_BTL *P, char a2)
{
  CCD_BTL::~CCD_BTL(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
