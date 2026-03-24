/*
 * XREFs of KiEnterDeferredReadyState @ 0x1402480F0
 * Callers:
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KiSearchForNewThread @ 0x140256518 (KiSearchForNewThread.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402C7A00 (KiSearchForNewThreadOnProcessor.c)
 *     KiFastReadyThread @ 0x1403411A0 (KiFastReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x14035D5B8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
    *(_BYTE *)(a1 + 388) = 7;
  }
  else
  {
    if ( (_BYTE)result == 5 )
    {
      result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        *(_QWORD *)(a1 + 1000) += result;
      else
        *(_QWORD *)(a1 + 992) += result;
    }
    *(_BYTE *)(a1 + 388) = 7;
  }
  return result;
}
