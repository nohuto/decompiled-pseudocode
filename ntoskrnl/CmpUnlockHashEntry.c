/*
 * XREFs of CmpUnlockHashEntry @ 0x1407AB010
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntry(_QWORD *P, unsigned int a2)
{
  __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt

  v3 = (__int64 *)(P[206]
                 + 24
                 * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9))));
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
