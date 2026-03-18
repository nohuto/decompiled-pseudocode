/*
 * XREFs of KiAllocatePrcbThreads @ 0x140377068
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateDpcDelegateThread @ 0x14037716C (KiAllocateDpcDelegateThread.c)
 */

__int64 __fastcall KiAllocatePrcbThreads(__int64 a1)
{
  __int64 result; // rax

  result = KiAllocateDpcDelegateThread(a1 + 13112, *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
