/*
 * XREFs of CmpStartSiloKeyLockTracker @ 0x1408168F8
 * Callers:
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x1408463A4 (CmpLockSiloKeyLockTrackerExclusive.c)
 */

__int64 __fastcall CmpStartSiloKeyLockTracker(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rtt

  CmpLockSiloKeyLockTrackerExclusive();
  *((_DWORD *)BugCheckParameter2 + 2) |= 1u;
  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 - 16;
  if ( (*BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || (v4 = *BugCheckParameter2, v4 != _InterlockedCompareExchange64(BugCheckParameter2, v3, v2)) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
