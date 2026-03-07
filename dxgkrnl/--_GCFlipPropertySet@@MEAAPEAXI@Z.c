CFlipPropertySetBase *__fastcall CFlipPropertySet::`scalar deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  *(_QWORD *)P = &CFlipPropertySet::`vftable';
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
