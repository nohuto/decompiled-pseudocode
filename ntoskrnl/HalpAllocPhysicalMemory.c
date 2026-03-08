/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140B3D9F4
 * Callers:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14037A3F0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14037A890 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037AC5C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateEarlyPages @ 0x140503580 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051CE10 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpAllocateScratchMemory @ 0x140AB0930 (HalpAllocateScratchMemory.c)
 *     HalpDmaInitMemory @ 0x140B3D81C (HalpDmaInitMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B8E9BC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B8EAB4 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x140409B90 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140B3DA64 (HalpAllocPhysicalMemoryInternal.c)
 */

__int64 __fastcall HalpAllocPhysicalMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) <= 3 )
  {
    v7 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL);
    if ( v7 )
    {
      v8 = (void *)HalpMapPhysicalMemory64(v7, 1LL, 0, 4LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x1000uLL);
        HalpUsedAllocDescriptors = 0;
        HalpAllocationDescriptorArray = v9;
        HalpAllocationDescriptorArraySize = 85;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3);
}
