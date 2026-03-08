/*
 * XREFs of MmFreeContiguousMemory @ 0x1403BD6E0
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x14038CE84 (HalpAllocateCommonBufferDmaThin.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     MmFreeContiguousMemorySpecifyCache @ 0x1403B1910 (MmFreeContiguousMemorySpecifyCache.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x14050ED00 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x14050FE10 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140510E60 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x1405136F0 (HalFreeCommonBufferV2.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051CE10 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051D17C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14053E1E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpFreeOverlayPages @ 0x140547440 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1405E4BC0 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409315C0 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140AC6C1C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140B8F474 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     EtwTraceContFreeEvent @ 0x1403BD880 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403BD8EC (ExRemovePoolTag.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061B438 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140ABF0E8 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // edi
  __int64 v4; // [rsp+30h] [rbp-30h]
  _OWORD v5[2]; // [rsp+38h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy((unsigned __int64)BaseAddress, (unsigned __int64 *)v5);
      v3 = 4;
      do
        v4 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v5 + (unsigned int)--v3));
      while ( (v4 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  EtwTraceContFreeEvent(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}
