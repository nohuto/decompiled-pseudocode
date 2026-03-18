/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14099F16C
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140983BAC (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x14099E2A0 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

signed __int32 __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(__int64 a1)
{
  __int64 v2; // rdi
  PVOID *i; // rbx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
    *(_DWORD *)(v2 + 152) |= 0x20u;
  for ( i = (PVOID *)PopDirectedDripsDiagSessionContext; i != &PopDirectedDripsDiagSessionContext; i = (PVOID *)*i )
  {
    if ( *((_DWORD *)i + 9) == dword_140C390E8 )
    {
      ++*((_DWORD *)i + 53);
      if ( v2 )
        PopDirectedDripsDiagInsertErrorRecord((__int64)i, v2, 5);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
