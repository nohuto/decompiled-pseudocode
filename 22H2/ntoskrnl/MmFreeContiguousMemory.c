/*
 * XREFs of MmFreeContiguousMemory @ 0x1402E9070
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036C920 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB10 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x140381B70 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404C4530 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C683C (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5080 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D533C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F22E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140503F50 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408653B4 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409CF530 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiFreeContiguousPages @ 0x1402E91B8 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     ExRemovePoolTag @ 0x1402EAE78 (ExRemovePoolTag.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053155C (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C5FF0 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // esi
  _OWORD v4[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+90h] [rbp+40h]
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h]

  NumberOfBytes = 0LL;
  memset(v4, 0, sizeof(v4));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy((unsigned __int64)BaseAddress, (unsigned __int64 *)v4);
      v3 = 4;
      do
        v5 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v4 + (unsigned int)--v3));
      while ( (v5 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  ExFreePoolWithTag(BaseAddress, 0);
}
