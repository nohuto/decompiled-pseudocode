/*
 * XREFs of ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0067D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C0067144 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
