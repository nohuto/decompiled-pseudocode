/*
 * XREFs of ??_E?$AggregatedBy@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C0067960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AggregatedBy<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  a1[1] = 0LL;
  *a1 = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(a1, 0);
  return a1;
}
