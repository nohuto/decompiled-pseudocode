/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406A6748
 * Callers:
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9578 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402986A0 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x1408D84B8 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128, a3, a4);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
