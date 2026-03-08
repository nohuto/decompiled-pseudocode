/*
 * XREFs of KiProcessThreadWaitList @ 0x1402508F0
 * Callers:
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140251760 (KiProcessExpiredTimerList.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403578B0 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140230250 (HalSendSoftwareInterrupt.c)
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // r13
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  volatile signed __int32 *v12; // r12
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  int v16; // r12d
  __int64 result; // rax
  bool v18; // zf
  struct _KPRCB *CurrentPrcb; // rax
  char v20; // dl
  int v21; // ecx
  _QWORD *v22; // rbx
  unsigned int v23; // r8d
  _QWORD *v24; // rdx
  _QWORD *v25; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+80h] [rbp+8h]

  v4 = *(_QWORD **)(a1 + 11528);
  v26 = 0;
  v25 = 0LL;
  v6 = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  while ( v4 )
  {
    v7 = v4;
    v8 = v4;
    v4 = (_QWORD *)*v4;
    v9 = v7 - 27;
    v10 = (__int64 *)v9[26];
    v11 = &v10[6 * *((unsigned __int8 *)v9 + 587)];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          v14 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *((_BYTE *)v9 + 566) = a2;
    *((_BYTE *)v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3, a4);
    v15 = *((_DWORD *)v9 + 30);
    if ( (v15 & 0x20000) == 0 || (v15 & 0x100000) != 0 )
    {
      *v8 = v6;
      v6 = v8;
    }
    else
    {
      v16 = v26;
      *v8 = v25;
      v25 = v8;
      v25 = (_QWORD *)*v8;
      do
      {
        KiDeferredReadySingleThread(a1, v8 - 27, &v25);
        v8 = v25;
        ++v16;
        if ( v25 )
          v25 = (_QWORD *)*v25;
        if ( (v16 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(a1 + 12760);
      }
      while ( v8 );
      v26 = v16;
    }
  }
  result = *(unsigned __int8 *)(a1 + 12761);
  if ( (_BYTE)result )
  {
    v18 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v18 )
    {
      v20 = *(_BYTE *)(a1 + 12760);
      v21 = *(_DWORD *)(a1 + 12764);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v21, v20);
      v22 = (_QWORD *)(a1 + 12768);
    }
    else
    {
      v22 = (_QWORD *)(a1 + 12768);
      v23 = 47;
      if ( *(_BYTE *)(a1 + 12760) == 1 )
        v23 = 31;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0, a1 + 12768, v23);
    }
    if ( *(_BYTE *)(a1 + 12761) == 2 )
    {
      *v22 = 2097153LL;
      result = (__int64)memset(v22 + 1, 0, 0x100uLL);
    }
    *(_BYTE *)(a1 + 12761) = 0;
    *(_DWORD *)(a1 + 12764) = 0xFFFF;
  }
  for ( ; v6; result = KiInswapAndReadyThread(a1, v24 - 27) )
  {
    v24 = v6;
    v6 = (_QWORD *)*v6;
  }
  return result;
}
