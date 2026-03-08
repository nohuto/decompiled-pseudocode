/*
 * XREFs of CmpUnlockHiveList @ 0x140731774
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x1402B38BC (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1402BFCE8 (CmpUnJoinClassOfTrust.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 CmpUnlockHiveList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpHiveListHeadLock);
  v0 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v1 = CmpHiveListHeadLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v0, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
}
