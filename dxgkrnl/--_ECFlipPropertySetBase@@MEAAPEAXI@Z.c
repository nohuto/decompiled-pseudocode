CFlipPropertySetBase *__fastcall CFlipPropertySetBase::`vector deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
