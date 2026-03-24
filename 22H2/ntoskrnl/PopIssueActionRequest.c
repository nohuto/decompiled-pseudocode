/*
 * XREFs of PopIssueActionRequest @ 0x140776468
 * Callers:
 *     PopPolicyWorkerAction @ 0x1407762D0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140779F20 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     PopSetPowerActionWatchdogState @ 0x140382C90 (PopSetPowerActionWatchdogState.c)
 *     PopPrepareSleep @ 0x140382E4C (PopPrepareSleep.c)
 *     PopSetSystemState @ 0x1403A57C0 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x1403A6560 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A72D0 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1403FCFC0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140413800 (memset.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PopReadSystemAwayModePolicy @ 0x1407747F8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x1407748D8 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x140774988 (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140774A14 (EtwShutdown.c)
 *     PoUnblockConsoleSwitch @ 0x140774BB0 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140774BD8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140774BF8 (PoStartPowerStateTasks.c)
 *     PopDiagTracePowerTransitionTime @ 0x140774C18 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140774D68 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140774EA0 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x14077534C (PopDiagTracePowerTransitionEnd.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140775418 (PopEnableSystemSleepCheckpoint.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140776788 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopSuspendApps @ 0x140776E70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776EC4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140776F24 (PopResumeApps.c)
 *     PopResumeServices @ 0x140776F9C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140777044 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x1408E7820 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1408F0318 (PopScreenOff.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FE9C8 (TtmNotifyLowPowerStateExited.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x140990D14 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140990D54 (PopReleaseAwaymodeLock.c)
 *     PfPowerActionNotify @ 0x140991198 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140993C64 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  int started; // eax
  __int64 v21; // rdx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ecx
  char v36; // bl
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  signed __int32 v43[8]; // [rsp+0h] [rbp-58h] BYREF
  bool v44; // [rsp+20h] [rbp-38h]
  char v45; // [rsp+21h] [rbp-37h]
  unsigned int v46; // [rsp+24h] [rbp-34h]
  int v47; // [rsp+28h] [rbp-30h]
  __int128 v48; // [rsp+30h] [rbp-28h] BYREF
  __int64 v49; // [rsp+40h] [rbp-18h]

  v47 = a4;
  v5 = 0;
  v49 = 0LL;
  v48 = 0LL;
  v46 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v11 = 1;
  if ( !byte_140C23350 && !byte_140C23351
    || a2 != 2
    || (int)a3 >= 5
    || (dword_140C23A54 & 0xFFFFFFFA) != 0
    || dword_140C23A54 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_140C23A54 )
    {
      if ( dword_140C23A54 > 5 && (dword_140C23A54 <= 7 || dword_140C23A54 == 11) )
        v14 = 21;
      else
        v14 = 20;
    }
    else
    {
      v14 = 1;
    }
    if ( a2 == 8 )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock(v13, v12);
      PopScreenOff(v14, v34);
      PopAcquirePolicyLock(v35);
      return 0LL;
    }
    PopSetPowerActionWatchdogState(1u);
    v44 = a2 - 4 <= 2;
    if ( PsWin32CalloutsEstablished && a2 - 4 > 2 )
      v11 = 0;
    v17 = a4;
    v18 = a4 & 0xFFFFFFFE;
    v19 = v17 | 1;
    if ( v47 >= 0 )
      v18 = v19;
    if ( v11 )
      LOBYTE(PopAction) = PopAction & 0xFD;
    v45 = byte_140C23AF0;
    PopReleasePolicyLock(v16, v15);
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v44 )
        goto LABEL_19;
      memset(&PopSleepStats, 0, 0x278uLL);
      PopDiagTracePowerTransitionStart(dword_140C23A54, dword_140C23A58);
      qword_140C23F28 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1LL);
    }
    if ( !v44 )
      PopSetSleepMarker(1);
LABEL_19:
    if ( v11 )
    {
      v22 = ZwSetSystemPowerState(a2, a3);
      goto LABEL_38;
    }
    LOBYTE(v48) = a1;
    *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v48) = v18;
    HIDWORD(v49) = v14;
    started = PoStartPowerStateTasks(&v48);
    v22 = started;
    if ( !a1 )
    {
      if ( started >= 0 && !v45 )
        PopPrepareSleep((__int64)&v48);
      v46 = PoBlockConsoleSwitch((__int64)&v48, v21);
    }
    if ( v22 >= 0 && !a1 )
    {
      PfPowerActionNotify(0LL);
      PopNoMoreInput = 1;
      _InterlockedOr(v43, 0);
      if ( !v45 )
      {
        LOBYTE(v24) = 1;
        PopPowerAggregatorNotifySuspendResume(v24);
        PopSuspendApps(&v48);
        PopSuspendServices(&v48);
      }
      if ( (v18 & 8) != 0 )
      {
        LOBYTE(v24) = 1;
        EtwShutdown(v24, v23);
      }
      PopDispatchSuperfetchNotification(v18, a3);
      v22 = ZwSetSystemPowerState(a2, a3);
      PopAcquirePolicyLock(v25);
      v26 = byte_140C23AF0;
      PopReleasePolicyLock(v28, v27);
      PopNoMoreInput = 0;
      _InterlockedOr(v43, 0);
      if ( !v26 )
      {
        PopResumeServices(&v48);
        PopPowerAggregatorNotifySuspendResume(0LL);
        PopResumeApps(&v48);
      }
      PfPowerActionNotify(7LL);
    }
    PoEndPowerStateTasks(&v48);
    if ( TtmpEnabled == 1 )
    {
      if ( a1 )
        goto LABEL_43;
      PopAcquirePolicyLock(v29);
      v36 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock(v38, v37);
      v39 = v36 == 0;
      v30 = v46;
      if ( v39 )
        goto LABEL_37;
      TtmNotifyLowPowerStateExited(v46);
      PopAcquirePolicyLock(v40);
      PopTtmIsSxCompleteNotificationPending = 0;
      PopReleasePolicyLock(v42, v41);
    }
    else
    {
      v30 = v46;
    }
    if ( !a1 )
    {
LABEL_37:
      PoUnblockConsoleSwitch(&v48, v30);
LABEL_38:
      if ( !a1 && !v44 )
      {
        if ( v22 >= 0 )
        {
          qword_140C23F50 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDiagTraceHiberStats();
          PopDiagTracePowerTransitionTime();
          PopDiagTracePerfTrackData(v18);
          PopShutdownButtonPressTime = 0LL;
          dword_140C24190 = a2;
          dword_140C24194 = a3;
          PopSleepStats = 1;
        }
        PopDiagTracePowerTransitionEnd(v22);
        PopCheckpointSystemSleep(41LL);
      }
    }
LABEL_43:
    PpmEndHighPerfRequest(2);
    PopAcquirePolicyLock(v31);
    PopSetPowerActionWatchdogState(0);
    return (unsigned int)v22;
  }
  if ( !dword_140C23358 )
  {
    if ( byte_140C23351 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_140C23358 + 4, dword_140C23358 + 7);
    }
    else
    {
      PopReleasePolicyLock(v10, v9);
      v5 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock(v33);
    }
  }
  PopReleaseAwaymodeLock();
  return v5;
}
