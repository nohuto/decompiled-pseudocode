/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406834D8
 * Callers:
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47B08 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E9C (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x140A47E50 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePlaceholderStorage(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 128);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreePlaceholderVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
