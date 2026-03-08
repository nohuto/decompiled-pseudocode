/*
 * XREFs of ??_GCToken@@UEAAPEAXI@Z @ 0x1C0077CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C0077C6C (--1CToken@@UEAA@XZ.c)
 */

CToken *__fastcall CToken::`scalar deleting destructor'(CToken *P, char a2)
{
  CToken::~CToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
