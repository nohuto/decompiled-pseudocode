/*
 * XREFs of ExtEnvAllocateMemory @ 0x14037C828
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x14037BC00 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x14037C268 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14037C308 (DmrpRmrrTreeAddRegionToDevice.c)
 *     IvtCreateDevice @ 0x14037C4C0 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x14037C5A4 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x14037C6C0 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x14037C78C (DmrConvertDeviceScope.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14037C89C (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x140529000 (IvtAllocateScalableModePasidTables.c)
 *     HalpHsaAllocateReservedDomainList @ 0x14052BD08 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x14052BD7C (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052BF84 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052C244 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052D070 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x14052E53C (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x14052F1D8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x14052F278 (IvmdProcessRange.c)
 *     HsaInitializeInterruptRemapping @ 0x140A96048 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *MemoryInternal; // rax

  v3 = 0;
  v4 = a2;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, a2);
  }
  else
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  memset(MemoryInternal, 0, v4);
  return v3;
}
