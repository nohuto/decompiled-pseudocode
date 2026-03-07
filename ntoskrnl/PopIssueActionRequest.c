__int64 __fastcall PopIssueActionRequest(char a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // si
  int v13; // ecx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // esi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ecx
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  char IsEnabled; // al
  int v38; // ecx
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  unsigned int v44; // ebx
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  signed __int32 v55[8]; // [rsp+0h] [rbp-68h] BYREF
  char v56; // [rsp+20h] [rbp-48h]
  bool v57; // [rsp+21h] [rbp-47h]
  unsigned int v58; // [rsp+24h] [rbp-44h]
  unsigned int v59; // [rsp+28h] [rbp-40h] BYREF
  unsigned int ActionEntryReason; // [rsp+30h] [rbp-38h]
  int v61; // [rsp+34h] [rbp-34h]
  __int128 v62; // [rsp+38h] [rbp-30h] BYREF
  int v63; // [rsp+48h] [rbp-20h]
  unsigned int v64; // [rsp+4Ch] [rbp-1Ch]

  v4 = a3;
  v63 = 0;
  v5 = 0;
  LOBYTE(v64) = 0;
  v62 = 0LL;
  v58 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v12 = 1;
  if ( (byte_140C3D490 || byte_140C3D491)
    && a2 == 2
    && (int)v4 < 5
    && (dword_140C3CD74 & 0xFFFFFFFA) == 0
    && dword_140C3CD74 != 1 )
  {
    if ( !dword_140C3D498 )
    {
      if ( byte_140C3D491 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_140C3D498 + 4, dword_140C3D498 + 7);
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11);
        v5 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock(v13);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140C3CD74 )
  {
    if ( dword_140C3CD74 == 6 || dword_140C3CD74 == 7 || dword_140C3CD74 == 11 )
      v15 = 21;
    else
      v15 = 20;
  }
  else
  {
    v15 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140C3CD74, (unsigned int)dword_140C3CD78);
  if ( a2 == 8 )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v17, v16, v18);
    PopScreenOff(v15);
    PopAcquirePolicyLock(v19);
    return 0LL;
  }
  PopSetPowerActionWatchdogState(1u);
  v20 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread(), 0LL);
  v23 = a2 - 4;
  v61 = v20;
  v57 = (unsigned int)v23 <= 2;
  if ( PsWin32CalloutsEstablished && (unsigned int)v23 > 2 )
    v12 = 0;
  if ( a4 >= 0 )
    v24 = a4 | 1;
  else
    v24 = a4 & 0xFFFFFFFE;
  if ( v12 )
    LOBYTE(PopAction) = PopAction & 0xFD;
  v56 = byte_140C3CE10;
  PopReleasePolicyLock(v23, v21, v22);
  PpmBeginHighPerfRequest();
  PopSleepStats = 0;
  if ( !v57 )
  {
    if ( !a1 )
    {
      memset(&PopSleepStats, 0, 0x2E0uLL);
      PopDiagTracePowerTransitionStart((unsigned int)dword_140C3CD74, (unsigned int)dword_140C3CD78);
      qword_140C3CF68 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1LL);
    }
    PopSetSleepMarker(1);
  }
  if ( !v12 )
  {
    LOBYTE(v62) = a1;
    *(_QWORD *)((char *)&v62 + 4) = __PAIR64__(v4, a2);
    HIDWORD(v62) = v24;
    v64 = v15;
    v63 = 1;
    v26 = PopDispatchStateCallout(&v62, 0LL);
    v25 = v26;
    if ( !a1 )
    {
      if ( v26 >= 0 && !v56 )
        PopPrepareSleep((__int64)&v62);
      v58 = PoBlockConsoleSwitch((__int64)&v62, v27);
    }
    if ( v25 >= 0 && !a1 )
    {
      v28 = (v24 >> 31) & 2 | 4u;
      if ( (v24 & 8) == 0 )
        v28 = (v24 >> 31) & 2;
      PfPowerActionNotify(0LL, v28, v4);
      PopNoMoreInput = 1;
      _InterlockedOr(v55, 0);
      if ( !v56 )
      {
        LOBYTE(v29) = 1;
        PopPowerAggregatorNotifySuspendResume(v29);
        PopSuspendApps(&v62);
        PopSuspendServices(&v62);
      }
      if ( (v24 & 8) != 0 )
      {
        LOBYTE(v29) = 1;
        EtwShutdown(v29);
      }
      PopDispatchSuperfetchNotification(v24, v4);
      v25 = ZwSetSystemPowerState(a2, (unsigned int)v4);
      PopAcquirePolicyLock(v30);
      v31 = byte_140C3CE10;
      PopReleasePolicyLock(v33, v32, v34);
      PopNoMoreInput = 0;
      _InterlockedOr(v55, 0);
      if ( !v31 )
      {
        PopResumeServices(&v62);
        PopPowerAggregatorNotifySuspendResume(0LL);
        PopResumeApps(&v62);
      }
      PfPowerActionNotify(7LL, 0LL, v4);
    }
    v63 = 8;
    PopDispatchStateCallout(&v62, 0LL);
    IsEnabled = TtmIsEnabled(v36, v35);
    if ( a1 )
      goto LABEL_65;
    if ( IsEnabled )
    {
      PopAcquirePolicyLock(v38);
      v39 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock(v41, v40, v42);
      v43 = v39 == 0;
      v44 = v58;
      if ( !v43 )
      {
        TtmNotifyLowPowerStateExited(v58);
        PopAcquirePolicyLock(v45);
        PopTtmIsSxCompleteNotificationPending = 0;
        PopReleasePolicyLock(v47, v46, v48);
      }
    }
    else
    {
      v44 = v58;
    }
    v59 = v44;
    v63 = 7;
    PopDispatchStateCallout(&v62, (__int64)&v59);
    goto LABEL_61;
  }
  v25 = ZwSetSystemPowerState(a2, (unsigned int)v4);
  if ( !a1 )
  {
LABEL_61:
    if ( !v57 )
    {
      if ( v25 >= 0 )
      {
        qword_140C3CF90 = KeQueryPerformanceCounter(0LL).QuadPart;
        PopDiagTraceHiberStats();
        PopDiagTracePowerTransitionTime();
        PopDiagTracePerfTrackData((unsigned int)v24);
        PopShutdownButtonPressTime = 0LL;
        dword_140C3D238 = a2;
        dword_140C3D23C = v4;
        PopSleepStats = 1;
      }
      PopCheckpointSystemSleep(41LL);
      PopBootStatCheckpointAvailable = 1;
      RtlBootStatusDisableFlushing(0);
      PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, (WORK_QUEUE_TYPE)(v49 + 1));
      PopDiagTracePowerTransitionEnd((unsigned int)v25);
      PopPotsLogPowerTransitionReliability((unsigned int)v25, (unsigned int)v4, ActionEntryReason);
    }
  }
LABEL_65:
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v50);
  PopSetPowerActionWatchdogState(0);
  if ( v61 >= 0 )
    PoDelistPowerStateTransitionBlocker(v52, v51, v53, v54);
  return (unsigned int)v25;
}
