/*
 * XREFs of ??_E?$Set@VDMMVIDPNPRESENTPATH@@@@UEAAPEAXI@Z @ 0x1C006A150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ @ 0x1C00052D4 (--1-$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
