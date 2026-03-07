PVOID __fastcall CFlipResource::`vector deleting destructor'(PVOID P, char a2)
{
  CFlipResource::~CFlipResource((__int64)P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
