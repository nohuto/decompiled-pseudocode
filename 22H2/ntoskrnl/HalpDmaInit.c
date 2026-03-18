/*
 * XREFs of HalpDmaInit @ 0x140B64168
 * Callers:
 *     HalpDmaInitSystem @ 0x140A90960 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitializeControllers @ 0x14039C398 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6429C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B64468 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6453C (HalpDmaAllocateMappingResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C640A8, (unsigned int)dword_140C640A0, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C64070 = 0xFFFFFFLL;
    dword_140C6407C = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C64288, (unsigned int)dword_140C64280, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C64250 = 0xFFFFFFLL;
      dword_140C6425C = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C64188, (unsigned int)dword_140C64180, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C6415C = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C64368, (unsigned int)dword_140C64360, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C6433C = 3;
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
