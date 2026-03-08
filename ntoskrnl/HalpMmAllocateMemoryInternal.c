/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x14037A7A8
 * Callers:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     HalpInterruptRegisterLine @ 0x1403748A0 (HalpInterruptRegisterLine.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140374B44 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x140376468 (HalpInterruptParseMadt.c)
 *     HalpMmAllocateMemory @ 0x14037A380 (HalpMmAllocateMemory.c)
 *     HalpInterruptInitializeIpis @ 0x14037B310 (HalpInterruptInitializeIpis.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037C950 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037CA68 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuProcessReservationsInternal @ 0x14039A0E8 (HalpIommuProcessReservationsInternal.c)
 *     HalpTimerCreateReferencePage @ 0x1403A0A54 (HalpTimerCreateReferencePage.c)
 *     HalpIommuAddDebuggerException @ 0x1403A48B8 (HalpIommuAddDebuggerException.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14050B5F0 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x1405150F4 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1405182F0 (HalpInterruptMapParkedPage.c)
 *     HalpCopyDebugDescriptor @ 0x140B358A4 (HalpCopyDebugDescriptor.c)
 *     ExtEnvRegisterIommu @ 0x140B3CFD4 (ExtEnvRegisterIommu.c)
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 *     HalpPowerInitNvsRegionData @ 0x140B62300 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140B636D0 (HalpAllocateNumaConfigData.c)
 *     HalpExtInitExtensions @ 0x140B6AA6C (HalpExtInitExtensions.c)
 *     HalpBlkAllocateShadowData @ 0x140B8EC14 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpMmAllocateMemoryInternal(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !HalpMmLoaderBlock || KeGetPcr()->Prcb.Number )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( HalpMmLeftoverMemorySize >= v3 )
  {
    result = HalpMmLeftoverMemory;
    HalpMmLeftoverMemory += v3;
    HalpMmLeftoverMemorySize -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, 0LL, v5, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = HalpMap(v6, v5, a2 == 1, 0, 4);
  if ( v7 )
  {
    HalpMmLeftoverMemory = v7 + v3;
    HalpMmLeftoverMemorySize = (v5 << 12) - v3;
  }
  return v7;
}
