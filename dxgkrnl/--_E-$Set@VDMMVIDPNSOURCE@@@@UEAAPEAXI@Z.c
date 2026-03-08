/*
 * XREFs of ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C006A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000557C (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
