DXGPROCESSVM *__fastcall DXGPROCESSVM::`vector deleting destructor'(DXGPROCESSVM *P, char a2)
{
  DXGPROCESSVM::~DXGPROCESSVM(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
