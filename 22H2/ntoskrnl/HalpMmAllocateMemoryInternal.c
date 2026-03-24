/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x1403BAC58
 * Callers:
 *     HalSocRequestApi @ 0x1403A199C (HalSocRequestApi.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403AFCD4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpInterruptParseMadt @ 0x1403AFD94 (HalpInterruptParseMadt.c)
 *     HalpInterruptInitializeIpis @ 0x1403B045C (HalpInterruptInitializeIpis.c)
 *     HalpTimerCreateReferencePage @ 0x1403B0964 (HalpTimerCreateReferencePage.c)
 *     HalpInterruptRegisterLine @ 0x1403B2370 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403B29D4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x1403B2D90 (HalpTimerRegister.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403B31C0 (HalRegisterPermanentAddressUsage.c)
 *     HalpMmAllocateMemory @ 0x1403BAB90 (HalpMmAllocateMemory.c)
 *     HalpIommuPopulateExceptionList @ 0x1403CF1B0 (HalpIommuPopulateExceptionList.c)
 *     HalpExtRegisterResourceDescriptor @ 0x1404C4290 (HalpExtRegisterResourceDescriptor.c)
 *     HalpIommuProcessReservationsInternal @ 0x1404C9AE0 (HalpIommuProcessReservationsInternal.c)
 *     HalpRegisterDmaController @ 0x1404CF434 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1840 (HalpInterruptMapParkedPage.c)
 *     ExtEnvAllocateMemory @ 0x1404D5030 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DB8FC (HalpIommuCreateDmarPageTable.c)
 *     HalpInitializeInterrupts @ 0x140A44BFC (HalpInitializeInterrupts.c)
 *     HalpSetupAcpiPhase0 @ 0x140A63D20 (HalpSetupAcpiPhase0.c)
 *     HalpPowerInitNvsRegionData @ 0x140A69594 (HalpPowerInitNvsRegionData.c)
 *     HalpCopyDebugDescriptor @ 0x140A6DD5C (HalpCopyDebugDescriptor.c)
 *     HalpExtInitExtensions @ 0x140A6EE38 (HalpExtInitExtensions.c)
 *     ExtEnvRegisterIommu @ 0x140A8C9F0 (ExtEnvRegisterIommu.c)
 *     HalpBlkAllocateShadowData @ 0x140A8DEE0 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x1403BB2D8 (HalpMap.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140A64AC0 (HalpAllocPhysicalMemory.c)
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
