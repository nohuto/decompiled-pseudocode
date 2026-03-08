/*
 * XREFs of ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C004B470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C0004E84 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DXGTARGETENTRY>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
