/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140990FE0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C2490 (PopGetMonitorReasonFromPowerEventId.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x14097E8D0 (PopPowerRequestRevokeRequestsForSleep.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
    memset(v5, 0, sizeof(v5));
    v3 = MonitorReasonFromPowerEventId & 0xFFFFFF;
    LODWORD(v5[0]) = 5;
    PopPowerAggregatorSetCurrentState(a1, (__int64)v5);
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    if ( qword_140C6ABC0 )
      qword_140C6ABC0(1LL);
    PopPowerRequestRevokeRequestsForSleep();
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    PopSleepstudyStartNextSession(3, v3);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  return 0LL;
}
