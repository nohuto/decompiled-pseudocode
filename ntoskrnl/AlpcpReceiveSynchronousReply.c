/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x1407CFC50
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140774E0C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x1402E0F40 (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x14033E350 (AlpcpSignalAndWait.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1407CF440 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x14097743C (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        int a4,
        LARGE_INTEGER *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  volatile signed __int64 *v18; // rbp
  int v19; // ecx

  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  v9 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].KernelStack, WrLpcReply, a2, a5, 1u);
  v10 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( !v10 )
  {
    if ( v9 )
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
  ExAcquirePushLockExclusiveEx(v10 - 16, 0LL);
  *(_BYTE *)(v10 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v10, 0x26uLL, BugCheckParameter4);
  v12 = *(_DWORD *)(v10 + 40);
  if ( (v12 & 0x800) != 0 )
  {
    v12 &= ~0x800u;
    *(_DWORD *)(v10 + 40) = v12;
  }
  --*(_WORD *)(v10 - 30);
  if ( (v12 & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v10 + 32) != CurrentThread )
      goto LABEL_39;
    if ( !v9 )
      v9 = -1073740031;
    goto LABEL_30;
  }
  *(_DWORD *)(v10 + 40) = v12 & 0xFFFFFFF8;
  if ( !v9 )
    goto LABEL_7;
  if ( *(struct _KTHREAD **)(v10 + 32) == CurrentThread )
  {
LABEL_30:
    *(_QWORD *)(v10 + 32) = 0LL;
    --*(_WORD *)(v10 - 30);
    if ( (*(_DWORD *)(v10 + 40) & 0x80u) != 0 )
      AlpcpUnlockMessage(v10);
    else
      AlpcpCancelMessage(v8, v10, 0);
    return v9;
  }
  AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
  v9 = 0;
LABEL_7:
  v13 = *(_DWORD *)(v10 + 40);
  if ( (v13 & 0x80u) != 0 )
  {
LABEL_39:
    AlpcpUnlockMessage(v10);
    return 3221227265LL;
  }
  if ( (v13 & 0x200) != 0 )
  {
    v14 = 0;
    if ( *(_QWORD *)(v10 + 136) )
      v14 = 0x80000000;
    v15 = v14 | 0x40000000;
    if ( !*(_QWORD *)(v10 + 144) )
      v15 = v14;
    v16 = v15 | 0x10000000;
    if ( !*(_QWORD *)(v10 + 152) )
      v16 = v15;
    if ( (v16 & a4) == 0 )
    {
      *(_WORD *)(v10 + 244) &= ~0x2000u;
LABEL_17:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v10);
      *a3 = v10;
      return v9;
    }
  }
  v18 = (volatile signed __int64 *)(v8 + 352);
  *(_WORD *)(v10 + 244) |= 0x2000u;
  ExAcquirePushLockSharedEx(v8 + 352, 0LL);
  v19 = *(_DWORD *)(v8 + 416);
  if ( (v19 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 256) & 0x1000) == 0 || (v19 & 0x20) == 0 || !*(_QWORD *)(v10 + 32) )
    {
      ++*(_WORD *)(v10 - 30);
      AlpcpInsertMessagePendingQueue(v8, v10);
    }
    if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    goto LABEL_17;
  }
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
  KeAbPostRelease(v8 + 352);
  AlpcpCancelMessage(v8, v10, 0);
  return 3221227264LL;
}
