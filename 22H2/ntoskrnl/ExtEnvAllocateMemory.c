/*
 * XREFs of ExtEnvAllocateMemory @ 0x1404D5030
 * Callers:
 *     HalpHsaAllocateReservedDomainList @ 0x1404E1450 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x1404E14E8 (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E1714 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1A20 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2000 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1404E27E0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x1404E4008 (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1404E4B58 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404E4C08 (IvmdProcessRange.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E734C (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x1404E7970 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x1404E7B88 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x1404E7C20 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x1404E846C (DmrConvertDeviceScope.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E8878 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E8918 (DmrpRmrrTreeAddRegionToDevice.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA588 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C4B8 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BAC58 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 MemoryInternal; // rax

  MemoryInternal = 0LL;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase == 1 )
      MemoryInternal = HalpMmAllocCtxAlloc(1LL, a2);
  }
  else
  {
    MemoryInternal = HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  return MemoryInternal == 0 ? 0xC000009A : 0;
}
