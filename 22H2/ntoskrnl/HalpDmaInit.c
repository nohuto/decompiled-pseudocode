/*
 * XREFs of HalpDmaInit @ 0x140A659C8
 * Callers:
 *     HalpDmaInitSystem @ 0x14099FFB0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpLaAddReservation @ 0x1403BBAA8 (HalpLaAddReservation.c)
 *     HalpDmaInitializeControllers @ 0x1403BBB44 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaInitializeDomain @ 0x140A65CEC (HalpDmaInitializeDomain.c)
 *     HalpDmaAllocateMappingResources @ 0x140A65DA8 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A65F28 (HalpDmaAllocateEmergencyResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C4BBE0, (unsigned int)dword_140C4BBD8, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4BBA8 = 0xFFFFFFLL;
    dword_140C4BBB4 = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C4BDA0, (unsigned int)dword_140C4BD98, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C4BD68 = 0xFFFFFFLL;
      dword_140C4BD74 = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C4BCC0, (unsigned int)dword_140C4BCB8, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C4BC94 = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C4BE80, (unsigned int)dword_140C4BE78, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C4BE54 = 3;
          result = HalpDmaAllocateEmergencyResources();
          if ( (int)result >= 0 )
          {
            result = HalpDmaAllocateMappingResources();
            if ( (int)result >= 0 )
            {
              result = HalpDmaInitializeControllers();
              if ( (int)result >= 0 )
              {
                result = HalpDmaInitializeDomain();
                if ( (int)result >= 0 )
                {
                  result = HalpLaAddReservation(0LL, 1LL);
                  if ( (int)result >= 0 )
                    return HalpLaAddReservation(4276092928LL, 0x100000LL);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
