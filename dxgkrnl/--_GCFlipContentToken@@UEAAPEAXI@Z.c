/*
 * XREFs of ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x1C0089100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C00890C0 (--1CFlipContentToken@@UEAA@XZ.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::`scalar deleting destructor'(CFlipContentToken *P, char a2)
{
  CFlipContentToken::~CFlipContentToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
