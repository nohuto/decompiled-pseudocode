/*
 * XREFs of ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0147268
 * Callers:
 *     NdisDllInitialize @ 0x1C0036320 (NdisDllInitialize.c)
 * Callees:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C0036398 (ndisAllocatePerProcessorPageDescriptor.c)
 */

void ndisInitializePerProcessorSlotAllocator(void)
{
  _LIST_ENTRY *PerProcessorPageDescriptor; // rax
  _LIST_ENTRY *Flink; // rcx

  KeInitializeSpinLock(&ndisPerProcessorDescriptorLock);
  qword_1C00E6E28 = (__int64)&ndisPerProcessorDescriptorList;
  ndisPerProcessorDescriptorList.Flink = &ndisPerProcessorDescriptorList;
  PerProcessorPageDescriptor = (_LIST_ENTRY *)ndisAllocatePerProcessorPageDescriptor();
  if ( PerProcessorPageDescriptor )
  {
    Flink = ndisPerProcessorDescriptorList.Flink;
    if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
      __fastfail(3u);
    PerProcessorPageDescriptor->Flink = ndisPerProcessorDescriptorList.Flink;
    PerProcessorPageDescriptor->Blink = &ndisPerProcessorDescriptorList;
    Flink->Blink = PerProcessorPageDescriptor;
    ndisPerProcessorDescriptorList.Flink = PerProcessorPageDescriptor;
  }
}
