/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x1408EE1AC
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EE690 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EE6E0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776208 (PopPowerAggregatorSetCurrentState.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorLockAcquire @ 0x1408EE654 (PopPowerAggregatorLockAcquire.c)
 *     PopPowerAggregatorLockRelease @ 0x1408EE670 (PopPowerAggregatorLockRelease.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F1DD4 (PopNetClearConnectivityConstraint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408FA54C (PopSleepstudySnapModernStandbySessionData.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // edi
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  __int64 v13; // [rsp+38h] [rbp-10h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 47;
  v2 = *(_DWORD *)(a1 + 100);
  v3 = *(_DWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) != *(_QWORD *)(a1 + 80) )
    v1 = *(_DWORD *)(a1 + 32);
  v9 = 0LL;
  v10 = 0;
  v13 = 0LL;
  v8 = 4;
  v11 = 4;
  v12 = *(_DWORD *)(a1 + 92);
  PopPowerAggregatorSetCurrentState(a1, (__int64)&v8);
  PopPowerAggregatorLockRelease();
  PopSleepstudySnapModernStandbySessionData();
  if ( v3 == 1 )
    PopSleepstudyStartNextSession(1u, v1);
  v14 = 0LL;
  PopDirectedDripsNotify(7, (char *)&v14);
  PopAcquirePolicyLock(v4);
  PopNetClearConnectivityConstraint(1LL);
  PopNetClearConnectivityConstraint(7LL);
  PopAggressiveStandbyAppliedActions = 0;
  PopReleasePolicyLock(v6, v5);
  ((void (__fastcall *)(_QWORD))qword_140C54488)(v2);
  return PopPowerAggregatorLockAcquire();
}
