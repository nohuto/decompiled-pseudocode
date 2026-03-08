/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x140879524
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140879470 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140880F30 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099057C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140990EA0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1403C2490 (PopGetMonitorReasonFromPowerEventId.c)
 *     PopPdcEngagePhases @ 0x14087960C (PopPdcEngagePhases.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PdcPoPerfOverride @ 0x1409949A8 (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140995050 (PopPdcDisengagePhases.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEnterScreenOff(__int64 a1)
{
  int v1; // edi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  BOOL v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 MonitorReasonFromPowerEventId; // rax
  __int128 v15; // [rsp+20h] [rbp-19h] BYREF
  __int128 v16; // [rsp+30h] [rbp-9h]
  __int128 v17; // [rsp+50h] [rbp+17h]
  __int128 v18; // [rsp+60h] [rbp+27h]
  __int128 v19; // [rsp+70h] [rbp+37h]

  v1 = *(_DWORD *)(a1 + 56);
  v2 = *(_OWORD *)(a1 + 16);
  v17 = *(_OWORD *)(a1 + 72);
  v3 = *(_OWORD *)(a1 + 32);
  v18 = v2;
  v19 = v3;
  v15 = 0LL;
  LODWORD(v15) = 4;
  v16 = 0LL;
  if ( v1 == 4 )
  {
    LOBYTE(v16) = v17;
    DWORD1(v16) = DWORD1(v17);
  }
  PopPowerAggregatorSetCurrentState(a1, &v15);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (v18 & 0xFFFFFFFC) != 0 || (_DWORD)v18 == 1 )
  {
    if ( v1 == 4 )
    {
      MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(SDWORD2(v18));
      PopSleepstudyStartNextSession(1LL, MonitorReasonFromPowerEventId & 0xFFFFFF);
    }
    v8 = BYTE8(v19) != 0;
    if ( BYTE8(v19) && (_DWORD)v18 == 4 && HIDWORD(v19) == 1 )
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
    PopPdcEngagePhases(v8);
  }
  else
  {
    PdcPoPerfOverride(v5, v4, v6, v7);
    PopPdcDisengagePhases(v11, v10, v12, v13);
    if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
  }
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
