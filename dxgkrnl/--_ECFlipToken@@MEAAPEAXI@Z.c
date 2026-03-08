/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0078720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00786EC (--1CFlipToken@@MEAA@XZ.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *P, char a2)
{
  CFlipToken::~CFlipToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
