/*
 * XREFs of HalpInterruptBuildGlobalStartupStub @ 0x1403A3BE0
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A86CD0 (HalpInterruptInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpHvVpStartEnabled @ 0x140372950 (HalpHvVpStartEnabled.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A3CC8 (HalpInterruptBuildStartupStub.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140A8D8E8 (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpInterruptBuildGlobalStartupStub()
{
  int v0; // edi
  void *ContiguousNodeMemory; // rax

  v0 = 0;
  if ( HalpHvVpStartEnabled() && HalpHvSleepEnlightenedCpuManager )
  {
    if ( !HalpLowStub )
    {
      if ( !HalpHvCpuManager && HalpInterruptBlockedProcessors )
        return (unsigned int)-1073741801;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096, 0, -1, 0, 4, 0x80000000);
      if ( (HalpLowStub = (__int64)ContiguousNodeMemory) == 0 )
        return (unsigned int)-1073741801;
      HalpLowStubPhysicalAddress = (PVOID)MmGetPhysicalAddress(ContiguousNodeMemory).QuadPart;
    }
    goto LABEL_4;
  }
  v0 = HalpMmBuildTiledMemoryMap();
  if ( v0 >= 0 )
  {
    HalpTiledMemoryMapActive = 1;
LABEL_4:
    HalpInterruptGlobalStartupBlock = (PVOID)HalpLowStub;
    HalpInterruptBuildStartupStub();
  }
  return (unsigned int)v0;
}
