/*
 * XREFs of KiActivateWaiterPriQueue @ 0x140354BF4
 * Callers:
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403548F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403578B0 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     KiAttemptFastRemovePriQueue @ 0x140352DB0 (KiAttemptFastRemovePriQueue.c)
 *     KiWakePriQueueWaiter @ 0x140355300 (KiWakePriQueueWaiter.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdi
  ULONG_PTR v5; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+3Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v6 = 0;
  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = KiAttemptFastRemovePriQueue(a1, (int *)&v6, -1);
      v4 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter(KeGetCurrentPrcb(), a1, result, v6);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v5 = a1 + 16LL * (int)v6 + 24;
          result = *(_QWORD **)v5;
          if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
            __fastfail(3u);
          *v4 = result;
          v4[1] = v5;
          result[1] = v4;
          *(_QWORD *)v5 = v4;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
