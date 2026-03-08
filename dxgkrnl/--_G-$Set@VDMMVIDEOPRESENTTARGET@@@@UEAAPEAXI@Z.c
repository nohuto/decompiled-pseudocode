/*
 * XREFs of ??_G?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0067DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0067174 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDEOPRESENTTARGET>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
