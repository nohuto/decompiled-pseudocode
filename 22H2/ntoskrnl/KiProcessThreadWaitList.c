/*
 * XREFs of KiProcessThreadWaitList @ 0x14024AC40
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     KiProcessExpiredTimerList @ 0x140247410 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402F76C0 (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 * Callees:
 *     KiReadyThread @ 0x140247FB0 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceReadyThread @ 0x1405A7EB0 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 **v4; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  __int64 *v13; // rax
  int result; // eax
  __int64 **v15; // rcx

  v4 = *(__int64 ***)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v15 = (__int64 **)v10[1], *v15 != v10) )
            __fastfail(3u);
          *v15 = v13;
          v13[1] = (__int64)v15;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *(_BYTE *)(v9 + 566) = a2;
    *(_BYTE *)(v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3, a4);
    result = KiReadyThread(a1, v9);
  }
  while ( v4 );
  return result;
}
