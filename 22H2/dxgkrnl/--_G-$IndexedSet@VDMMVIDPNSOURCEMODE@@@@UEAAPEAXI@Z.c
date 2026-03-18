/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C00687F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C0067D64 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNSOURCEMODE>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
