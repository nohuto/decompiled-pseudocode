/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x140715F0C
 * Callers:
 *     AlpcpDispatchMessage @ 0x1407141B8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140716180 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140716D14 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140716D48 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140716D7C (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // r13
  __int64 v4; // r14
  volatile signed __int32 **v5; // rsi
  ULONG_PTR v6; // rcx
  volatile signed __int32 *v7; // rbp
  volatile signed __int32 *v8; // r12
  int v9; // r15d
  struct _KTHREAD *CurrentThread; // r14
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF
  int v17; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v17 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v1 + 24);
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) != 1 )
  {
    v5 = *(volatile signed __int32 ***)(v4 + 16);
    v6 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 2 )
    {
      ExAcquirePushLockSharedEx(v6, 0LL);
      v7 = v5[2];
      v8 = v7;
      goto LABEL_4;
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
    v7 = *v5;
    goto LABEL_22;
  }
  v5 = *(volatile signed __int32 ***)(v3 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v7 = *v5;
  v8 = *v5;
  if ( v3 != v4 )
LABEL_22:
    v8 = v5[1];
LABEL_4:
  if ( (*(_DWORD *)(v3 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v3 + 256), 0xCu)
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && !_bittest((const signed __int32 *)(v4 + 256), 0xCu) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    v9 = -1073741769;
LABEL_38:
    AlpcpCancelMessage(v3, v1, 0x10000);
    return (unsigned int)v9;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *((_QWORD *)v7 + 34) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    v9 = AlpcpReferenceReplyTargetPorts((PVOID)v7, (PVOID)v8);
    if ( v9 < 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      goto LABEL_38;
    }
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v4 + 352, 0LL);
      *(_DWORD *)(v4 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352));
      KeAbPostRelease(v4 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v11 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v11;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    v12 = *(_DWORD *)(v1 + 40);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v17 & 0x10000) != 0 )
    {
      v13 = v11 & 0xDFFF;
      v14 = v12 | 0x200;
    }
    else
    {
      v13 = v11 | 0x2000;
      v14 = v12 & 0xFFFFFDFF;
    }
    *(_WORD *)(v1 + 244) = v13;
    *(_DWORD *)(v1 + 40) = v14 | 0x10000;
    _InterlockedOr(v16, 0);
    AlpcpClearOwnerPortMessage(v1);
    AlpcpSetOwnerPortMessage(v1, v3);
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement(v8 + 100);
    *(_QWORD *)(v1 + 120) = *((_QWORD *)v8 + 7);
    ObfDereferenceObject((PVOID)v8);
    if ( *(_QWORD *)(v1 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v1);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 88), 0LL);
    if ( (v17 & 0x20000) != 0 )
    {
      *(_DWORD *)(v1 + 40) &= ~0x100u;
      *(_WORD *)(v1 - 30) += 2;
      *(_QWORD *)(v1 + 32) = CurrentThread;
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v1);
    }
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 16) = v5;
    if ( (*(_BYTE *)(v1 + 160) & 1) != 0 )
      *(_DWORD *)(a1 + 48) |= 8u;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
}
