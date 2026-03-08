/*
 * XREFs of ??_E?$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C006A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000554C (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
