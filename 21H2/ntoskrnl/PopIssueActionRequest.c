/*
 * XREFs of PopIssueActionRequest @ 0x1407FF888
 * Callers:
 *     PopPolicyWorkerAction @ 0x1407FF440 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140808500 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14025DC0C (PpmEndHighPerfRequest.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopSetSystemState @ 0x140368E90 (PopSetSystemState.c)
 *     PpmBeginHighPerfRequest @ 0x1403690D0 (PpmBeginHighPerfRequest.c)
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 *     PopPrepareSleep @ 0x14038BAA8 (PopPrepareSleep.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x14041EE20 (ZwSetSystemPowerState.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopReadSystemAwayModePolicy @ 0x1407FD7F8 (PopReadSystemAwayModePolicy.c)
 *     PopPotsGetActionEntryReason @ 0x1407FD8D8 (PopPotsGetActionEntryReason.c)
 *     PopDiagTracePowerTransitionStart @ 0x1407FD930 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x1407FD9E0 (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x1407FDA6C (EtwShutdown.c)
 *     PopDiagTraceHiberStats @ 0x1407FDC18 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x1407FE0BC (PopDiagTracePerfTrackData.c)
 *     PopDiagTracePowerTransitionTime @ 0x1407FE1F4 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1407FE344 (PopDiagTracePowerTransitionEnd.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1407FE3D8 (PopPotsLogPowerTransitionReliability.c)
 *     PoUnblockConsoleSwitch @ 0x1407FE774 (PoUnblockConsoleSwitch.c)
 *     PoStartPowerStateTasks @ 0x1407FE79C (PoStartPowerStateTasks.c)
 *     PoEndPowerStateTasks @ 0x1407FE7BC (PoEndPowerStateTasks.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407FE8C0 (PopEnableSystemSleepCheckpoint.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x1407FFBAC (PopPowerAggregatorNotifySuspendResume.c)
 *     PopSuspendApps @ 0x1407FFCB0 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407FFD04 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407FFD64 (PopResumeApps.c)
 *     PopResumeServices @ 0x1407FFDDC (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407FFE58 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x140997374 (PopScreenOff.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A4510 (TtmNotifyLowPowerStateExited.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x140A48C1C (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140A48C5C (PopReleaseAwaymodeLock.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  int started; // eax
  int v19; // esi
  __int64 v20; // rcx
  int v21; // ecx
  char v22; // bl
  __int64 v23; // rdx
  __int64 v24; // rcx
  char IsEnabled; // al
  int v26; // ecx
  int v27; // ebx
  int v28; // ecx
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // ecx
  char v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-58h] BYREF
  char v42; // [rsp+20h] [rbp-38h]
  bool v43; // [rsp+21h] [rbp-37h]
  unsigned int v44; // [rsp+24h] [rbp-34h]
  int ActionEntryReason; // [rsp+28h] [rbp-30h]
  __int128 v46; // [rsp+30h] [rbp-28h] BYREF
  int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]

  v47 = 0;
  v5 = 0;
  LOBYTE(v48) = 0;
  v46 = 0LL;
  v44 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v11 = 1;
  if ( !byte_140C232D0 && !byte_140C232D1
    || a2 != 2
    || (int)a3 >= 5
    || (dword_140C227D4 & 0xFFFFFFFA) != 0
    || dword_140C227D4 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_140C227D4 )
    {
      if ( dword_140C227D4 > 5 && (dword_140C227D4 <= 7 || dword_140C227D4 == 11) )
        v12 = 21;
      else
        v12 = 20;
    }
    else
    {
      v12 = 1;
    }
    ActionEntryReason = PopPotsGetActionEntryReason(dword_140C227D4, dword_140C227D8);
    if ( a2 == 8 )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock(v14, v13);
      PopScreenOff(v12, v31);
      PopAcquirePolicyLock(v32);
      return 0LL;
    }
    PopSetPowerActionWatchdogState(1u);
    v43 = a2 - 4 <= 2;
    if ( PsWin32CalloutsEstablished && a2 - 4 > 2 )
      v11 = 0;
    if ( a4 >= 0 )
      v17 = a4 | 1;
    else
      v17 = a4 & 0xFFFFFFFE;
    if ( v11 )
      LOBYTE(PopAction) = PopAction & 0xFD;
    v42 = byte_140C22870;
    PopReleasePolicyLock(v16, v15);
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !v43 )
    {
      if ( !a1 )
      {
        memset(&PopSleepStats, 0, 0x2E0uLL);
        PopDiagTracePowerTransitionStart(dword_140C227D4, dword_140C227D8);
        qword_140C22CA8 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopEnableSystemSleepCheckpoint();
        PopCheckpointSystemSleep(1LL);
      }
      PopSetSleepMarker(1);
    }
    if ( v11 )
    {
      v19 = ZwSetSystemPowerState(a2, a3);
    }
    else
    {
      LOBYTE(v46) = a1;
      *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(a3, a2);
      HIDWORD(v46) = v17;
      v48 = v12;
      started = PoStartPowerStateTasks((__int64)&v46);
      v19 = started;
      if ( !a1 )
      {
        if ( started >= 0 && !v42 )
          PopPrepareSleep((__int64)&v46);
        v44 = PoBlockConsoleSwitch((__int64)&v46);
      }
      if ( v19 >= 0 && !a1 )
      {
        PfPowerActionNotify(0LL);
        PopNoMoreInput = 1;
        _InterlockedOr(v41, 0);
        if ( !v42 )
        {
          LOBYTE(v20) = 1;
          PopPowerAggregatorNotifySuspendResume(v20);
          PopSuspendApps(&v46);
          PopSuspendServices(&v46);
        }
        if ( (v17 & 8) != 0 )
          EtwShutdown(1);
        PopDispatchSuperfetchNotification(v17, a3);
        v19 = ZwSetSystemPowerState(a2, a3);
        PopAcquirePolicyLock(v21);
        v22 = byte_140C22870;
        PopReleasePolicyLock(v24, v23);
        PopNoMoreInput = 0;
        _InterlockedOr(v41, 0);
        if ( !v22 )
        {
          PopResumeServices(&v46);
          PopPowerAggregatorNotifySuspendResume(0LL);
          PopResumeApps(&v46);
        }
        PfPowerActionNotify(7LL);
      }
      PoEndPowerStateTasks((__int64)&v46);
      IsEnabled = TtmIsEnabled();
      if ( a1 )
        goto LABEL_42;
      if ( IsEnabled )
      {
        PopAcquirePolicyLock(v26);
        v33 = PopTtmIsSxCompleteNotificationPending;
        PopTtmIsSxTransitionInProgress = 0;
        PopReleasePolicyLock(v35, v34);
        v37 = v33 == 0;
        v27 = v44;
        if ( !v37 )
        {
          TtmNotifyLowPowerStateExited(v44, v36);
          PopAcquirePolicyLock(v38);
          PopTtmIsSxCompleteNotificationPending = 0;
          PopReleasePolicyLock(v40, v39);
        }
      }
      else
      {
        v27 = v44;
      }
      PoUnblockConsoleSwitch((__int64)&v46, v27);
    }
    if ( !a1 && !v43 )
    {
      if ( v19 >= 0 )
      {
        qword_140C22CD0 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopDiagTraceHiberStats();
        PopDiagTracePowerTransitionTime();
        PopDiagTracePerfTrackData(v17);
        PopShutdownButtonPressTime = 0LL;
        dword_140C22F78 = a2;
        dword_140C22F7C = a3;
        PopSleepStats = 1;
      }
      PopDiagTracePowerTransitionEnd(v19);
      PopPotsLogPowerTransitionReliability(v19, a3, ActionEntryReason);
    }
LABEL_42:
    PpmEndHighPerfRequest(2);
    PopAcquirePolicyLock(v28);
    PopSetPowerActionWatchdogState(0);
    return (unsigned int)v19;
  }
  if ( !dword_140C232D8 )
  {
    if ( byte_140C232D1 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_140C232D8 + 4, dword_140C232D8 + 7);
    }
    else
    {
      PopReleasePolicyLock(v10, v9);
      v5 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock(v30);
    }
  }
  PopReleaseAwaymodeLock();
  return v5;
}
