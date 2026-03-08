/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x1406C01CC
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoFlushNextHive @ 0x1406BD800 (CmpDoFlushNextHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmReleaseLoadKeyContext @ 0x14079329C (CmReleaseLoadKeyContext.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407AF9B0 (CmpDelayDerefKeyControlBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 */

signed __int32 __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  WORK_QUEUE_TYPE v6; // r8d

  v1 = (unsigned __int64 *)(a1 + 1680);
  v3 = KeAbPreAcquire(a1 + 1680, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 19;
  if ( **(_QWORD **)(a1 + 2936) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4800), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 21;
      CmpReferenceHive(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4816), v6);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
