CFlipManagerSignal *__fastcall CFlipManagerSignal::`vector deleting destructor'(CFlipManagerSignal *P, char a2)
{
  CFlipManagerSignal::~CFlipManagerSignal(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
