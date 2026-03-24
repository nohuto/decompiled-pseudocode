/*
 * XREFs of HalMapIoSpace @ 0x1403B3460
 * Callers:
 *     HalpHvTimerInitialize @ 0x1403904C0 (HalpHvTimerInitialize.c)
 *     HalpApicInitializeLocalUnit @ 0x1403A13E0 (HalpApicInitializeLocalUnit.c)
 *     HalpApicInitializeIoUnit @ 0x1403A5090 (HalpApicInitializeIoUnit.c)
 *     HalpHpetDiscover @ 0x1403B25CC (HalpHpetDiscover.c)
 *     HalpHpetInitialize @ 0x1403B33E0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403CFC50 (HalpPmTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5080 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSfiTimerInitialize @ 0x1404D57B0 (HalpSfiTimerInitialize.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB6D8 (HalpIommuAllocateAndZeroPageTable.c)
 *     WdHwCreateHardwareRegister @ 0x1404DE308 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x1404E0130 (IvtInitializeIdentityMappings.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E734C (HalpIvtProcessDrhdEntry.c)
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA588 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x1409AA730 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140A650DC (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x1403BB2D8 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  else
    return (PVOID)HalpMap(PhysicalAddress.LowPart, (NumberOfBytes + 4095) >> 12, CacheType == MmCached, 0, 4);
}
