/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140976D30
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140976C1C (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140976EA8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // r15
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  ExAcquirePushLockSharedEx(a2 + 352, 0LL);
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v5 = (volatile signed __int64 *)(a2 + 136);
  ExAcquirePushLockExclusiveEx(a2 + 136, 0LL);
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v6 )
    goto LABEL_3;
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v6 )
  {
    ExAcquirePushLockExclusiveEx(a2 + 176, 0LL);
    v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v6 )
    {
      v5 = (volatile signed __int64 *)(a2 + 200);
      ExAcquirePushLockExclusiveEx(a2 + 200, 0LL);
      v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_3:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
    }
  }
LABEL_14:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
