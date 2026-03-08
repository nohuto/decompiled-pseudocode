/*
 * XREFs of ??_ECFlipManagerSignal@@UEAAPEAXI@Z @ 0x1C0081520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipManagerSignal@@UEAA@XZ @ 0x1C00814B8 (--1CFlipManagerSignal@@UEAA@XZ.c)
 */

CFlipManagerSignal *__fastcall CFlipManagerSignal::`vector deleting destructor'(CFlipManagerSignal *P, char a2)
{
  CFlipManagerSignal::~CFlipManagerSignal(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
