/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x140995888
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140995CC0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140995D10 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8 (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140997DE0 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopNetClearConnectivityConstraint @ 0x14099858C (PopNetClearConnectivityConstraint.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 76);
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 64) )
  {
    if ( *(_BYTE *)(a1 + 83) != 1 || (LODWORD(v3) = *(_DWORD *)(a1 + 80), (v3 & 0xFFFFFF) == 0) )
      LODWORD(v3) = 50;
  }
  else
  {
    v3 = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 24)) & 0xFFFFFF;
  }
  PopPowerAggregatorEnterScreenOff(a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudySnapModernStandbySessionData();
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0xFFFFFFFC) != 0 || v4 == 1 )
    PopSleepstudyStartNextSession(1, v3);
  v9 = 0LL;
  PopDirectedDripsNotify(7, &v9);
  PopAcquirePolicyLock(v5);
  PopNetClearConnectivityConstraint(1LL);
  PopNetClearConnectivityConstraint(7LL);
  PopAggressiveStandbyAppliedActions = 0;
  PopReleasePolicyLock(v7, v6);
  ((void (__fastcall *)(_QWORD))qword_140C5ADD8)(v2);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
