/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x1403C9690
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1403C975C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1403C9834 (ExpAeUpdateStatsForExclusiveRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rsi
  int v4; // ecx
  char v5; // di
  char v7; // cl
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v8 = *(_DWORD *)(BugCheckParameter2 + 12);
    v5 = 0;
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v8) )
      *(_DWORD *)(BugCheckParameter2 + 12) = v8;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 8);
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      v5 = ExpTryAcquireFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
      if ( !v5 )
      {
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      }
    }
  }
  if ( v2 )
  {
    if ( v5 )
      *(_BYTE *)(v2 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v2);
  }
  return v5;
}
