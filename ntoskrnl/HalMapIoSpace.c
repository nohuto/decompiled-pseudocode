/*
 * XREFs of HalMapIoSpace @ 0x14037AD90
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140372980 (HalpApicInitializeLocalUnit.c)
 *     HalpHpetDiscover @ 0x140372BE0 (HalpHpetDiscover.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037AC5C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     HalpApicInitializeIoUnit @ 0x14039F3E0 (HalpApicInitializeIoUnit.c)
 *     HalpHpetInitialize @ 0x1403B0270 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403B17D0 (HalpPmTimerInitialize.c)
 *     HalpHvTimerInitialize @ 0x1403C8870 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051CE10 (ExtEnvAllocatePhysicalMemory.c)
 *     WdHwCreateHardwareRegister @ 0x140527E18 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14052ABF4 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140A96048 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140A961E0 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140B63078 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  int v3; // edx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    CacheType = MmNonCached;
  return (PVOID)HalpMap(PhysicalAddress.LowPart, v3, CacheType, 0, 4);
}
