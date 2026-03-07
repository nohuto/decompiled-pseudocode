CFlipResource **__fastcall CPoolBufferResourceState::`scalar deleting destructor'(CFlipResource **P, char a2)
{
  *P = (CFlipResource *)&CPoolBufferResourceState::`vftable';
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
