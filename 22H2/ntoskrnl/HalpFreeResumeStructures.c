/*
 * XREFs of HalpFreeResumeStructures @ 0x1409982CC
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14038B4F0 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099A140 (HalpMmFreeTiledMemoryMap.c)
 */

unsigned int __fastcall HalpFreeResumeStructures(__int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi

  if ( HalpHiberProcState )
  {
    HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( HalpTiledCr3Addresses )
  {
    if ( result )
    {
      v3 = 0LL;
      v4 = result;
      do
      {
        HalpMmFreeTiledMemoryMap(v3 + HalpTiledCr3Addresses);
        v3 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    result = HalpMmAllocCtxFree(v2, HalpTiledCr3Addresses);
    HalpTiledCr3Addresses = 0LL;
  }
  return result;
}
