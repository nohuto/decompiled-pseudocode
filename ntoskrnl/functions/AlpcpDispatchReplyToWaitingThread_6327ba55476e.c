__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r13
  int v4; // r12d
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // r8
  __int16 v10; // dx
  __int16 v11; // dx
  unsigned int v12; // ecx
  __int64 v13; // rax
  ULONG_PTR v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  struct _KTHREAD *v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int16 v22; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A0h] [rbp+18h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(void **)a1;
  v4 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v23 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v22 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v5 + 272) )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v20 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v10 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v10;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v4 & 0x10000) != 0 )
    {
      v11 = v10 & 0xDFFF;
      v12 = v6 | 0x200;
    }
    else
    {
      v11 = v10 | 0x2000;
      v12 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v12;
    *(_WORD *)(v1 + 244) = v11;
    ObfReferenceObject(v2);
    *(_DWORD *)(v1 + 40) |= 0x1000u;
    *(_QWORD *)(v1 + 24) = v2;
    if ( (v4 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&v20[1].RelativeTimerBias, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    v13 = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v21 = v13;
    if ( v13 )
    {
      BugCheckParameter2 = (volatile signed __int64 *)(v13 + 176);
      ExAcquirePushLockExclusiveEx(v13 + 176, 0LL);
      --*(_DWORD *)(v21 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      v14 = (ULONG_PTR)BugCheckParameter2;
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(BugCheckParameter2);
        v14 = (ULONG_PTR)BugCheckParameter2;
      }
      KeAbPostRelease(v14);
      --*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) = *(_DWORD *)(v1 + 40) & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v15 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
    *(_DWORD *)(v1 + 40) = v15;
    if ( ((v15 >> 3) & 0xF) == 1 )
    {
      v16 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v16 - 16, 0LL);
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 56);
      else
        v18 = 0LL;
      *(_QWORD *)(v1 + 120) = v18;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v16 - 16));
      KeAbPostRelease(v16 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = 0LL;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( (v4 & 0x20000) != 0 )
    {
      v19 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v20;
      *(_QWORD *)(a1 + 24) = v23;
      if ( !v19 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      --*(_WORD *)(v1 - 30);
      *(_QWORD *)(v1 + 32) = 0LL;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      AlpcpUnlockBlob(v1);
      if ( (v4 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v23;
      else
        KeReleaseSemaphoreEx(v23 + 1240, 1u, 1);
    }
    if ( (v22 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
  else
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
}
