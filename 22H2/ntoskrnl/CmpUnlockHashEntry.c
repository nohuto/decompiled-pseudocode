/*
 * XREFs of CmpUnlockHashEntry @ 0x14076AAD0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14022D510 (CmpDrainDelayDerefContext.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407697F0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 *     CmpDeleteHive @ 0x14074EBE4 (CmpDeleteHive.c)
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
