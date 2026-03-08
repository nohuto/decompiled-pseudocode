/*
 * XREFs of ??_ECFlipResource@@MEAAPEAXI@Z @ 0x1C00849F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C00848C0 (--1CFlipResource@@MEAA@XZ.c)
 */

PVOID __fastcall CFlipResource::`vector deleting destructor'(PVOID P, char a2)
{
  CFlipResource::~CFlipResource((__int64)P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
