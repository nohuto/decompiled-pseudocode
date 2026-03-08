/*
 * XREFs of KiAllocatePrcbThreads @ 0x140371E18
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateDpcDelegateThread @ 0x140371F1C (KiAllocateDpcDelegateThread.c)
 */

__int64 __fastcall KiAllocatePrcbThreads(__int64 a1)
{
  __int64 result; // rax

  result = KiAllocateDpcDelegateThread(a1 + 13112, *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
