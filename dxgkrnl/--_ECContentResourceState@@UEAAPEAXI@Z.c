/*
 * XREFs of ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C0085170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContentResourceState@@UEAA@XZ @ 0x1C00878E8 (--1CContentResourceState@@UEAA@XZ.c)
 */

CContentResourceState *__fastcall CContentResourceState::`vector deleting destructor'(
        CContentResourceState *P,
        char a2)
{
  CContentResourceState::~CContentResourceState(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
