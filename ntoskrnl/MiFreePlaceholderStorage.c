/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406800F8
 * Callers:
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A44E38 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     MiFreePlaceholderVadEvent @ 0x140A45180 (MiFreePlaceholderVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
