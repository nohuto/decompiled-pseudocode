/*
 * XREFs of ??_ECFlipResourceState@@MEAAPEAXI@Z @ 0x1C0084A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C008491C (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResource **__fastcall CFlipResourceState::`vector deleting destructor'(CFlipResource **P, char a2)
{
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
