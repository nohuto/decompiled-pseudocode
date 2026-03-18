/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1407FE640
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x1407FE700 (PopBlockSessionSwitch.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4510 (TtmNotifyLowPowerStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v4; // [rsp+40h] [rbp-30h] BYREF
  __int128 v5; // [rsp+50h] [rbp-20h]
  __int64 v6; // [rsp+60h] [rbp-10h]
  unsigned int v7; // [rsp+88h] [rbp+18h] BYREF

  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 2;
  PopPowerAggregatorSetCurrentState(a1, v3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  v7 = -1;
  LOBYTE(v1) = 1;
  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  PopBlockSessionSwitch(v1, &v7);
  if ( TtmIsEnabled() )
  {
    TtmNotifyLowPowerStateExited(v7, 0LL);
  }
  else
  {
    v4 = 5uLL;
    v5 = 0uLL;
    v6 = 0LL;
    PopInvokeWin32Callout(5, (__int64)&v4, 1, &v7);
  }
  PopBlockSessionSwitch(0LL, &v7);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
