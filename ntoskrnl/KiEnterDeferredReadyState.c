/*
 * XREFs of KiEnterDeferredReadyState @ 0x140341110
 * Callers:
 *     KiFastReadyThread @ 0x140239100 (KiFastReadyThread.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KiInsertDeferredReadyList @ 0x140343778 (KiInsertDeferredReadyList.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
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
    if ( (_BYTE)result != 5 )
    {
LABEL_5:
      *(_BYTE *)(a1 + 388) = 7;
      return result;
    }
    result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
    {
      *(_QWORD *)(a1 + 1000) += result;
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 992) += result;
    *(_BYTE *)(a1 + 388) = 7;
  }
  return result;
}
