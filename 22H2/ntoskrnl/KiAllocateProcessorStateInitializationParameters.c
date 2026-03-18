/*
 * XREFs of KiAllocateProcessorStateInitializationParameters @ 0x14037709C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateProcessorStacks @ 0x140377610 (KiAllocateProcessorStacks.c)
 *     KiAllocateProcessorNumber @ 0x140377908 (KiAllocateProcessorNumber.c)
 *     MmAllocateIndependentPages @ 0x14086C6F0 (MmAllocateIndependentPages.c)
 *     KiAllocateIdleThread @ 0x140A89720 (KiAllocateIdleThread.c)
 */

__int64 __fastcall KiAllocateProcessorStateInitializationParameters(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 IndependentPages; // rax

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    IndependentPages = MmAllocateIndependentPages(*(unsigned int *)(a1 + 16), a2);
    *(_QWORD *)(a1 + 8) = IndependentPages;
    if ( !IndependentPages )
      return 3221225495LL;
  }
  KiAllocateProcessorNumber(v2, a1 + 32);
  result = KiAllocateProcessorStacks(a1, v2);
  if ( (int)result >= 0 )
  {
    result = KiAllocateIdleThread(a1 + 48, v2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
