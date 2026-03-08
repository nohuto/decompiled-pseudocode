/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0067C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0067174 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDEOPRESENTTARGET>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
