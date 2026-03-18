/*
 * XREFs of HalMapIoSpace @ 0x14037E780
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377BD0 (HalpApicInitializeLocalUnit.c)
 *     HalpHpetDiscover @ 0x140377E30 (HalpHpetDiscover.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E658 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037EF04 (HalpIvtProcessDrhdEntry.c)
 *     HalpApicInitializeIoUnit @ 0x1403A49C0 (HalpApicInitializeIoUnit.c)
 *     HalpHpetInitialize @ 0x1403B4F10 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403B6490 (HalpPmTimerInitialize.c)
 *     HalpHvTimerInitialize @ 0x1403CD390 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F340 (ExtEnvAllocatePhysicalMemory.c)
 *     WdHwCreateHardwareRegister @ 0x14052A348 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14052D0C0 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeIommu @ 0x140A8A670 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140A99320 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140B66CE8 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x14037E878 (HalpMap.c)
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
