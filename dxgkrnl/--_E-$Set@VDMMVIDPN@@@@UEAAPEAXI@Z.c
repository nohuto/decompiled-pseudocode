/*
 * XREFs of ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C0067D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0067114 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPN>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
