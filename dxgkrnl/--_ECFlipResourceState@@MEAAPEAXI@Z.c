CFlipResource **__fastcall CFlipResourceState::`vector deleting destructor'(CFlipResource **P, char a2)
{
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
