/*
 * XREFs of HalpDmaInit @ 0x140B60E78
 * Callers:
 *     HalpDmaInitSystem @ 0x140A8D4D0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitializeControllers @ 0x140398798 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B60FAC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B61178 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6124C (HalpDmaAllocateMappingResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C63C48, (unsigned int)dword_140C63C40, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C63C10 = 0xFFFFFFLL;
    dword_140C63C1C = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C63E28, (unsigned int)dword_140C63E20, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C63DF0 = 0xFFFFFFLL;
      dword_140C63DFC = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C63D28, (unsigned int)dword_140C63D20, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C63CFC = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C63F08, (unsigned int)dword_140C63F00, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C63EDC = 3;
          result = HalpDmaAllocateEmergencyResources();
          if ( (int)result >= 0 )
          {
            result = HalpDmaAllocateMappingResources();
            if ( (int)result >= 0 )
              return HalpDmaInitializeControllers();
          }
        }
      }
    }
  }
  return result;
}
