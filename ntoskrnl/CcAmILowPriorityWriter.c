/*
 * XREFs of CcAmILowPriorityWriter @ 0x14021B7DC
 * Callers:
 *     CcFlushCacheAcquireRange @ 0x14021A0CC (CcFlushCacheAcquireRange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

bool __fastcall CcAmILowPriorityWriter(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // si

  v1 = *(_QWORD *)(a1 + 536);
  ExAcquirePushLockExclusiveEx(v1 + 1280, 0LL);
  v2 = *(_QWORD *)(v1 + 1256) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 1280);
  KeAbPostRelease(v1 + 1280);
  return v2;
}
