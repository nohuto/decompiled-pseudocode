/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x1408091FC
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140808480 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408091B0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceRelease @ 0x140369FDC (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8 (PopGetMonitorReasonFromPowerEventId.c)
 *     PdcPoPerfOverride @ 0x14080877C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140808BE8 (PopPdcDisengagePhases.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcEngagePhases @ 0x1408093DC (PopPdcEngagePhases.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEnterScreenOff(__int64 a1)
{
  int v1; // edi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  BOOL v4; // edi
  __int64 MonitorReasonFromPowerEventId; // rax
  __int128 v7; // [rsp+20h] [rbp-19h] BYREF
  __int128 v8; // [rsp+30h] [rbp-9h]
  __int128 v9; // [rsp+50h] [rbp+17h]
  __int128 v10; // [rsp+60h] [rbp+27h]
  __int128 v11; // [rsp+70h] [rbp+37h]

  v1 = *(_DWORD *)(a1 + 56);
  v2 = *(_OWORD *)(a1 + 16);
  v9 = *(_OWORD *)(a1 + 72);
  v3 = *(_OWORD *)(a1 + 32);
  v10 = v2;
  v11 = v3;
  v7 = 0LL;
  LODWORD(v7) = 4;
  v8 = 0LL;
  if ( v1 == 4 )
  {
    LOBYTE(v8) = v9;
    DWORD1(v8) = DWORD1(v9);
  }
  PopPowerAggregatorSetCurrentState(a1, &v7);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (v10 & 0xFFFFFFFC) != 0 || (_DWORD)v10 == 1 )
  {
    if ( v1 == 4 )
    {
      MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(SDWORD2(v10));
      PopSleepstudyStartNextSession(1LL, MonitorReasonFromPowerEventId & 0xFFFFFF);
    }
    v4 = BYTE8(v11) != 0;
    if ( BYTE8(v11) && HIDWORD(v11) == 1 && (_DWORD)v10 == 4 )
    {
      if ( !PopPowerAggregatorIdleDisabledPowerRequestTaken )
      {
        PopPowerAggregatorIdleDisabledPowerRequestTaken = 1;
        PopPowerRequestReferenceAcquire(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
      }
    }
    else if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
    PopPdcEngagePhases(v4);
  }
  else
  {
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
  }
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
