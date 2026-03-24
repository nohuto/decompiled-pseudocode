/*
 * XREFs of PopPowerInformationInternal @ 0x1406F1BE4
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     RtlStringCbLengthW @ 0x1403224DC (RtlStringCbLengthW.c)
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 *     RtlStringCbCopyW @ 0x14032E038 (RtlStringCbCopyW.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     RtlCheckTokenMembership @ 0x140348440 (RtlCheckTokenMembership.c)
 *     PopSetWatchdog @ 0x140349578 (PopSetWatchdog.c)
 *     PopDeepSleepSetDisengageReason @ 0x14034A558 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14034A5E0 (PopDeepSleepClearDisengageReason.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PoLatencySensitivityHint @ 0x14037D5D0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038D738 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1403C9770 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PpmInternalPlatformIdleVeto @ 0x140567218 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x14056726C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x140568700 (PoDirectedDripsClearDeviceFlags.c)
 *     PopIsRunningInVm @ 0x140568C40 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140568CB8 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopFxClearDeviceConstraints @ 0x140569D04 (PopFxClearDeviceConstraints.c)
 *     PopPlRegisterPowerPlane @ 0x14057E964 (PopPlRegisterPowerPlane.c)
 *     RtlIsMultiSessionSku @ 0x1406816A0 (RtlIsMultiSessionSku.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406F2C58 (PopSetPowerSettingValueAcDc.c)
 *     PspIsContextAdmin @ 0x14070CE38 (PspIsContextAdmin.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     PoUserShutdownCancelled @ 0x140779D50 (PoUserShutdownCancelled.c)
 *     PopIsRunningAsLocalSystem @ 0x14077A2E8 (PopIsRunningAsLocalSystem.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x14077A3A4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetDisplayStatus @ 0x14077A77C (PopSetDisplayStatus.c)
 *     PopBootStatSet @ 0x14077F168 (PopBootStatSet.c)
 *     PopEsQueueStateEvaluation @ 0x14077FEBC (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x1407813E4 (PopUpdateConsoleDisplayState.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B4DC (PpmPerfUpdateDomainPolicy.c)
 *     PopAcquireTransitionLock @ 0x14078D978 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14078D9D4 (PopReleaseTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x140791634 (PopBroadcastSessionInfo.c)
 *     PopBootStatGet @ 0x1407C18F0 (PopBootStatGet.c)
 *     PopUpdateExternalDisplayState @ 0x1407D2D38 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x1407D3C2C (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D48D4 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1408E10EC (PopCheckTestsigningEnabled.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408E1980 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopS0LowPowerIdleInfo @ 0x1408E40BC (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E625C (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x1408E6F3C (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x1408E7198 (PopReadResumeContext.c)
 *     PopScreenOff @ 0x1408F0318 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408F0364 (PopScreenOn.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F207C (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408F22B0 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x1408F2344 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F2588 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408F2670 (PopBootStatUnlock.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F575C (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408F8934 (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FEE40 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FEECC (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913780 (RtlCapabilityCheckForSingleSessionSku.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  _QWORD *v18; // rdi
  char *v19; // rax
  int PagesFromHiberFile; // ebx
  unsigned __int64 v22; // rax
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  PVOID v28; // r14
  unsigned __int64 v29; // r15
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  _BYTE *v43; // rdi
  char PowerButtonBugcheckEnabled; // al
  _QWORD *v45; // rax
  char *v46; // rdx
  __int64 *v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdi
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  const wchar_t *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int BrandedFrequency; // eax
  struct _PROCESSOR_NUMBER *v57; // rcx
  ULONG v58; // edx
  char v59; // di
  int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  PVOID v64; // rax
  PVOID v65; // rdi
  _OWORD *v66; // rax
  __int128 v67; // xmm0
  int v68; // eax
  bool v69; // zf
  int v70; // edi
  _DWORD *v71; // rcx
  char v72; // bl
  _BYTE *v73; // rax
  unsigned int v74; // eax
  _BYTE *v75; // rax
  _BYTE *PoolWithTag; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  char v80; // al
  int v81; // edi
  int v82; // edi
  int v83; // edi
  int v84; // edi
  int v85; // edi
  _BYTE *v86; // rcx
  char v87; // al
  _DWORD *v88; // rax
  __int64 v89; // rcx
  char v90; // [rsp+42h] [rbp-5Fh] BYREF
  _BYTE *v91; // [rsp+48h] [rbp-59h]
  PVOID P; // [rsp+50h] [rbp-51h]
  _DWORD v93[2]; // [rsp+58h] [rbp-49h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-41h]
  __int64 v95; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v97[8]; // [rsp+80h] [rbp-21h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  v11 = (unsigned int)a3;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  v91 = a7;
  pcbLength = 0LL;
  v93[0] = 0;
  v95 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (_DWORD)v9 == 36 )
    {
      if ( (unsigned __int8)PopIsRunningAsLocalSystem() )
        goto LABEL_238;
      return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v9 == 65 )
      return (unsigned int)-1073741790;
    if ( (unsigned int)v9 <= 0x3F )
    {
      v10 = 0x8E00030014B80105uLL;
      if ( _bittest64((const __int64 *)&v10, v9) )
        return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v9 == 67 )
      return (unsigned int)-1073741790;
    v22 = (unsigned int)(v9 - 29);
    if ( (unsigned int)v22 <= 0x23 )
    {
      v10 = 0x88B4C0001LL;
      if ( _bittest64((const __int64 *)&v10, v22) )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( ((_DWORD)v9 == 35 || (_DWORD)v9 == 24) && !(unsigned __int8)PopIsRunningAsLocalSystem() )
      return (unsigned int)-1073741790;
    switch ( (_DWORD)v9 )
    {
      case 0x3D:
        if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !(unsigned __int8)PspIsContextAdmin() )
          return (unsigned int)-1073741790;
        goto LABEL_73;
      case 0x2D:
        PagesFromHiberFile = 0;
        if ( (unsigned __int8)PopIsRunningAsLocalSystem()
          || (unsigned __int8)PopCheckTestsigningEnabled() && (unsigned __int8)PspIsContextAdmin() )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          if ( *(_BYTE *)(v8 + 8) )
            PoUserShutdownInitiated();
          else
            PoUserShutdownCancelled();
          return (unsigned int)PagesFromHiberFile;
        }
        return (unsigned int)-1073741790;
      case 0x19:
        v52 = L"systemManagement";
        SourceString = 0LL;
        v53 = 0x7FFFLL;
        do
        {
          if ( !*v52 )
            break;
          ++v52;
          --v53;
        }
        while ( v53 );
        v54 = (0x7FFF - v53) & -(__int64)(v53 != 0);
        if ( v53 )
        {
          SourceString.Buffer = L"systemManagement";
          SourceString.Length = 2 * v54;
          SourceString.MaximumLength = 2 * v54 + 2;
        }
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &SourceString);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        return (unsigned int)-1073741790;
    }
  }
  else
  {
    v12 = (unsigned int)(v9 - 5);
    if ( (unsigned int)v12 <= 0x3B )
    {
      a2 = 0x88B4F8410080005LL;
      if ( _bittest64(&a2, v12) )
      {
        PagesFromHiberFile = -1073741637;
        goto LABEL_69;
      }
    }
  }
  if ( (int)v9 > 38 )
  {
    if ( (int)v9 <= 54 )
    {
      if ( (int)v9 < 53 )
      {
        if ( (int)v9 <= 45 )
        {
          v23 = v9 - 39;
          if ( !v23 )
          {
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v46 = &v90;
            v90 = *(_BYTE *)(v8 + 8);
            v47 = &WNF_PO_WAKE_ON_VOICE_STATE;
            return (unsigned int)ZwUpdateWnfStateData((__int64)v47, (__int64)v46);
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            if ( (_DWORD)v11 != 16 || *(_DWORD *)(v8 + 8) )
              return (unsigned int)-1073741811;
            if ( *(_BYTE *)(v8 + 12) )
              PopDeepSleepSetDisengageReason(7u);
            else
              PopDeepSleepClearDisengageReason(7u);
            return 0;
          }
          v25 = v24 - 1;
          if ( !v25 )
          {
            if ( (_DWORD)v11 != 16 )
              return (unsigned int)-1073741811;
            if ( a4 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !PoolWithTag )
                return (unsigned int)-1073741670;
              v77 = *(_QWORD *)(v8 + 8);
              if ( v77 )
                v78 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
              else
                v78 = 0LL;
              if ( !v78 || (v79 = *(_QWORD *)(v78 + 80)) == 0 || (v69 = *(_QWORD *)(v79 + 64) == 0LL, v80 = 1, v69) )
                v80 = 0;
              *PoolWithTag = v80;
              *a5 = PoolWithTag;
              *a6 = 1;
              *a7 = 1;
              return 0;
            }
            return (unsigned int)-1073741789;
          }
          v26 = v25 - 1;
          if ( !v26 )
          {
            if ( (unsigned int)v11 < 8 || !a4 )
              return (unsigned int)-1073741789;
            v50 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
            if ( !v50 )
              return (unsigned int)-1073741670;
            *v50 = 0LL;
            v50[1] = 0LL;
            *v50 = PopBsdPowerTransitionExtensionAtBoot;
            v51 = xmmword_140C54340;
LABEL_126:
            v50[1] = v51;
            *a5 = v50;
            *a6 = 32;
LABEL_50:
            *a7 = 1;
            return 0;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
              return (unsigned int)-1073741811;
            if ( !a4 )
              return (unsigned int)-1073741789;
            v49 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
            if ( !v49 )
              return (unsigned int)-1073741670;
            v57 = (struct _PROCESSOR_NUMBER *)(v8 + 8);
            *v49 = 0LL;
            if ( (_DWORD)v11 != 12 )
              v57 = 0LL;
            BrandedFrequency = PpmPerfGetBrandedFrequency(v57);
            goto LABEL_165;
          }
          if ( v27 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x90 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return (unsigned int)-1073741790;
        }
        v81 = v9 - 46;
        if ( !v81 )
        {
          if ( (_DWORD)v11 != 32 || a4 )
            return (unsigned int)-1073741811;
          PopNotifySessionUserPowerRequestAttributed(
            *(unsigned int *)(v8 + 24),
            *(_QWORD *)(v8 + 8),
            *(_QWORD *)(v8 + 16));
          return 0;
        }
        v82 = v81 - 1;
        if ( v82 )
        {
          v83 = v82 - 1;
          if ( v83 )
          {
            v84 = v83 - 1;
            if ( !v84 )
            {
              if ( !a4 )
                return (unsigned int)-1073741789;
              v43 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v43 )
                return (unsigned int)-1073741670;
              PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
              goto LABEL_101;
            }
            v85 = v84 - 1;
            if ( v85 )
            {
              if ( v85 == 1 )
              {
                if ( (unsigned int)v11 >= 0x10 )
                {
                  PagesFromHiberFile = 0;
                  PopWakeAlarmTimeOverride = *(_QWORD *)(v8 + 8);
                  return (unsigned int)PagesFromHiberFile;
                }
                return (unsigned int)-1073741789;
              }
              return (unsigned int)-1073741811;
            }
            if ( !a4 )
              return (unsigned int)-1073741789;
            v86 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
            if ( !v86 )
              return (unsigned int)-1073741670;
            v87 = PopAutoChkCausedReboot;
            goto LABEL_297;
          }
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v8 + 4) )
            return (unsigned int)PpmInternalPlatformIdleVeto(*(_DWORD *)(v8 + 8), *(_BYTE *)(v8 + 12));
        }
        else
        {
          if ( (unsigned int)v11 < 0x14 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v8 + 4) )
            return (unsigned int)PpmInternalProcessorIdleVeto(
                                   *(_DWORD *)(v8 + 8),
                                   *(_DWORD *)(v8 + 12),
                                   *(_BYTE *)(v8 + 16));
        }
        return (unsigned int)-1073741735;
      }
LABEL_342:
      PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(v9, v11, v8, (_DWORD)a6, (__int64)a5);
      if ( PagesFromHiberFile < 0 || !*a5 )
        return (unsigned int)PagesFromHiberFile;
LABEL_121:
      *v91 = 1;
      return (unsigned int)PagesFromHiberFile;
    }
    if ( (int)v9 > 62 )
    {
      if ( (_DWORD)v9 == 63 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v45 = ExAllocatePoolWithTag((POOL_TYPE)(v9 - 63 + 1), (unsigned int)(v9 - 63 + 8), 0x206D654Du);
        if ( !v45 )
          return (unsigned int)-1073741670;
        *v45 = &SshpRoutineBlock;
        *a5 = v45;
        *a6 = 8;
        goto LABEL_106;
      }
      if ( (_DWORD)v9 != 64 )
      {
        if ( (_DWORD)v9 == 65 )
        {
          if ( (_DWORD)v11 != 16 )
            return (unsigned int)-1073741811;
          v89 = *(_QWORD *)(v8 + 8);
          if ( !v89 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = PopFxClearDeviceConstraints(v89);
          v31 = 0;
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return v31;
        }
        if ( (_DWORD)v9 == 66 )
          return (unsigned int)-1073741637;
        if ( (_DWORD)v9 != 67 )
          return (unsigned int)-1073741811;
        *a6 = 0;
        *a5 = 0LL;
        v88 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !v88 )
          return (unsigned int)-1073741670;
        *v88 = 0;
        *v88 = PopDisableInboxPepGeneratedConstraintsOverride;
        *a5 = v88;
        *a6 = 4;
        return 0;
      }
      goto LABEL_342;
    }
    if ( (_DWORD)v9 == 62 )
    {
      if ( !a4 )
        return (unsigned int)-1073741789;
      v86 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v86 )
        return (unsigned int)-1073741670;
      v87 = PopLastBootSucceeded;
LABEL_297:
      *v86 = v87;
      *a5 = v86;
      *a6 = 1;
      goto LABEL_106;
    }
LABEL_73:
    if ( (_DWORD)v9 != 56 )
    {
      if ( (_DWORD)v9 == 57 )
      {
        if ( a4 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopPlRegisterPowerPlane(v8, v11, a3);
      }
      else if ( (_DWORD)v9 == 58 )
      {
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsSetDeviceFlags(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16));
      }
      else
      {
        if ( (_DWORD)v9 != 59 )
        {
          if ( (_DWORD)v9 == 60 )
          {
            if ( !a4 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8LL);
            PagesFromHiberFile = PopReadResumeContext(v93, &v95);
            PopReleaseTransitionLock(8LL);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a5 = v95;
            *a6 = v93[0];
          }
          else
          {
            if ( (_DWORD)v9 != 61 || (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741811;
            if ( !a4 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8LL);
            PagesFromHiberFile = PopReadPagesFromHiberFile(*(unsigned int *)(v8 + 8), 1LL, a5);
            PopReleaseTransitionLock(8LL);
            if ( PagesFromHiberFile < 0 )
            {
              *a5 = 0LL;
              return (unsigned int)PagesFromHiberFile;
            }
            *a6 = 4096;
          }
          *v91 = 1;
          return 0;
        }
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsClearDeviceFlags(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16));
      }
    }
    goto LABEL_342;
  }
  if ( (_DWORD)v9 == 38 )
    goto LABEL_58;
  if ( (int)v9 > 22 )
  {
    if ( (int)v9 > 29 )
    {
      if ( (_DWORD)v9 != 30 )
      {
        if ( (int)v9 > 32 )
        {
          if ( (_DWORD)v9 == 33 )
            return (unsigned int)-1073741637;
          if ( (int)v9 > 35 )
          {
            if ( (_DWORD)v9 != 36 )
            {
              if ( (unsigned int)v11 < 8 || !a4 )
                return (unsigned int)-1073741789;
              v71 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
              if ( !v71 )
                return (unsigned int)-1073741670;
              *v71 = qword_140C23A44;
              *a5 = v71;
              *a6 = 4;
              goto LABEL_106;
            }
LABEL_238:
            if ( PopIsRunningInVm() )
            {
              if ( (unsigned int)v11 >= 0xC )
              {
                if ( !a4 )
                {
                  v72 = *(_BYTE *)(v8 + 8);
                  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
                  PopEsEnabledOnHost = v72;
                  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
                  PopEsQueueStateEvaluation(0LL);
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741637;
          }
        }
LABEL_58:
        if ( (_DWORD)v11 != 24 )
          return (unsigned int)-1073741811;
        if ( a4 )
        {
          v74 = *(_DWORD *)(v8 + 8);
          if ( !v74 )
            return (unsigned int)-1073741811;
          v29 = 4LL * v74;
          if ( v29 > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x206D654Du);
          v28 = P;
          if ( !P )
            return (unsigned int)-1073741670;
        }
        else
        {
          v28 = P;
          LODWORD(v29) = 0;
        }
        switch ( (_DWORD)v9 )
        {
          case 0x1F:
            if ( !*(_DWORD *)(v8 + 8) )
              goto LABEL_251;
            v30 = PopBootStatGet(v8, v28);
            break;
          case 0x20:
            if ( *(_DWORD *)(v8 + 8) )
            {
              v30 = PopBootStatSet(v8, v28);
              break;
            }
LABEL_251:
            PagesFromHiberFile = -1073741811;
LABEL_114:
            v10 = (unsigned __int64)P;
LABEL_69:
            if ( !v10 )
              return (unsigned int)PagesFromHiberFile;
            v58 = 0;
LABEL_168:
            ExFreePoolWithTag((PVOID)v10, v58);
            return (unsigned int)PagesFromHiberFile;
          case 0x22:
            if ( !*(_DWORD *)(v8 + 8) )
              goto LABEL_251;
            v30 = PopBootStatCheckIntegrity(v8);
            break;
          case 0x23:
            v30 = PopBootStatRestoreDefaults();
            break;
          default:
            v30 = PopBootStatUnlock();
            break;
        }
        PagesFromHiberFile = v30;
        if ( v30 >= 0 )
        {
          if ( v28 )
          {
            v75 = v91;
            v10 = 0LL;
            *a5 = v28;
            *a6 = v29;
            *v75 = 1;
          }
          else
          {
            v10 = (unsigned __int64)P;
          }
          PagesFromHiberFile = 0;
          goto LABEL_69;
        }
        goto LABEL_114;
      }
      if ( (unsigned int)v11 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v73 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
      if ( !v73 )
        return (unsigned int)-1073741670;
      v73[2] = 0;
      *v73 = PpmPerfQosSupportedAndConfigured;
      v73[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
      v73[2] = PpmPerfQosGroupPolicyDisable != 0;
      *a5 = v73;
      *a6 = 3;
LABEL_106:
      *a7 = 1;
      return 0;
    }
    if ( (_DWORD)v9 == 29 )
    {
      if ( (unsigned int)v11 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v66 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
      if ( !v66 )
        return (unsigned int)-1073741670;
      *v66 = 0LL;
      v66[1] = 0LL;
      v66[2] = 0LL;
      *v66 = PopFirmwareResetReason;
      v66[1] = xmmword_140C54380;
      v67 = xmmword_140C54390;
LABEL_197:
      v66[2] = v67;
      *a5 = v66;
      *a6 = 48;
      goto LABEL_50;
    }
    v32 = v9 - 23;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 == 1 && (_DWORD)v11 == 12 )
              {
                v93[1] = *(_DWORD *)(v8 + 8);
                PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            if ( (unsigned int)v11 >= 0x10 )
            {
              if ( !a4 )
              {
                PopTransitionCheckpoint(*(unsigned int *)(v8 + 8), *(unsigned int *)(v8 + 12));
                return 0;
              }
              return (unsigned int)-1073741811;
            }
          }
          else if ( (unsigned int)v11 >= 0xC )
          {
            if ( a4 )
              return (unsigned int)-1073741811;
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            v68 = PpmPerfQosDisableRefcount;
            if ( *(_BYTE *)(v8 + 8) )
            {
              if ( PpmPerfQosDisableRefcount == -1 )
              {
                PagesFromHiberFile = -1073741675;
              }
              else
              {
                v68 = PpmPerfQosDisableRefcount + 1;
                PagesFromHiberFile = 0;
                ++PpmPerfQosDisableRefcount;
              }
              v69 = v68 == 1;
            }
            else
            {
              if ( PpmPerfQosDisableRefcount )
              {
                v68 = PpmPerfQosDisableRefcount - 1;
                PagesFromHiberFile = 0;
                --PpmPerfQosDisableRefcount;
              }
              else
              {
                PagesFromHiberFile = -1073741637;
              }
              v69 = v68 == 0;
            }
            if ( v69 )
              PpmPerfUpdateDomainPolicy();
            else
              PpmReleaseLock(&PpmPerfPolicyLock);
            return (unsigned int)PagesFromHiberFile;
          }
        }
        else if ( (unsigned int)v11 >= 0xC )
        {
          if ( !a4 )
          {
            if ( *(_BYTE *)(v8 + 8) )
              PopScreenOn();
            else
              PopScreenOff(30LL, a2);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      if ( (unsigned int)v11 < 0x28 )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      v70 = *(_DWORD *)(v8 + 12);
      if ( PopVideoHighPrecisionBrightnessEnabled
        || v70 != -1
        && (PopVideoHighPrecisionBrightnessEnabled = 1,
            ZwUpdateWnfStateData(
              (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
              (__int64)&PopVideoHighPrecisionBrightnessEnabled),
            PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF),
            PopVideoHighPrecisionBrightnessEnabled) )
      {
        if ( v70 == -1 )
          return (unsigned int)-1073741637;
      }
      v97[0] = *(_DWORD *)(v8 + 8);
      v97[1] = *(_DWORD *)(v8 + 12);
      v97[2] = *(_DWORD *)(v8 + 16);
      v97[3] = *(_DWORD *)(v8 + 20);
      v97[4] = *(_DWORD *)(v8 + 24);
      v97[5] = *(_DWORD *)(v8 + 28);
      v97[6] = *(_DWORD *)(v8 + 32);
      v97[7] = *(_DWORD *)(v8 + 36);
      PopBroadcastSessionInfo(4LL, 32LL, v97);
    }
    else
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LOBYTE(v10) = *(_BYTE *)(v8 + 8);
      PopUpdateExternalDisplayState(v10);
    }
    return 0;
  }
  if ( (_DWORD)v9 == 22 )
  {
    if ( (unsigned int)v11 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v66 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    if ( !v66 )
      return (unsigned int)-1073741670;
    *v66 = 0LL;
    v66[1] = 0LL;
    v66[2] = 0LL;
    *v66 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v66[1] = xmmword_140C54310;
    v67 = xmmword_140C54320;
    goto LABEL_197;
  }
  if ( (int)v9 <= 6 )
  {
    if ( (_DWORD)v9 != 6 )
    {
      if ( !(_DWORD)v9 )
      {
        if ( (unsigned int)v11 < 0x20 || !a4 )
          return (unsigned int)-1073741789;
        v48 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
        v49 = v48;
        if ( !v48 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopFxPlatformRegisterInterface(v8, v48);
        if ( PagesFromHiberFile >= 0 )
        {
          *a5 = v49;
          *a6 = 16;
          goto LABEL_121;
        }
        goto LABEL_167;
      }
      v37 = v9 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( !v39 )
          {
            if ( (unsigned int)v11 >= 0x10 )
            {
              if ( !a4 && (PopSimulate & 1) != 0 )
              {
                PopUpdateSmartUserPresencePredictions(*(_QWORD *)(v8 + 8), 0LL);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741789;
          }
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 >= 0xC )
            {
              if ( !a4 )
              {
                PoLatencySensitivityHint(*(_DWORD *)(v8 + 8));
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741789;
          }
          if ( (unsigned int)v11 < 8 || !a4 )
            return (unsigned int)-1073741789;
          v43 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
          if ( !v43 )
            return (unsigned int)-1073741670;
          if ( !PopPlatformAoAc || (v69 = RtlIsMultiSessionSku(v42, v41) == 0, PowerButtonBugcheckEnabled = 1, v69) )
            PowerButtonBugcheckEnabled = 0;
LABEL_101:
          *v43 = PowerButtonBugcheckEnabled;
          *a5 = v43;
          *a6 = 1;
          *a7 = 1;
          return 0;
        }
        PopVideoInitialized = 1;
        v46 = &PopVideoInitialized;
        v47 = &WNF_PO_VIDEO_INITIALIALIZED;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v47, (__int64)v46);
      }
      if ( !a4 )
        return (unsigned int)-1073741789;
      v55 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      v49 = v55;
      if ( !v55 )
        return (unsigned int)-1073741670;
      BrandedFrequency = PopS0LowPowerIdleInfo(v55);
LABEL_165:
      PagesFromHiberFile = BrandedFrequency;
      if ( BrandedFrequency >= 0 )
      {
        *a5 = v49;
        *a6 = 8;
        goto LABEL_121;
      }
LABEL_167:
      v58 = 544040269;
      v10 = (unsigned __int64)v49;
      goto LABEL_168;
    }
    if ( (unsigned int)v11 < 0xC )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    LOBYTE(v10) = *(_BYTE *)(v8 + 8);
    return (unsigned int)PopNetUpdateStandbyRequest(v10);
  }
  v13 = v9 - 7;
  if ( !v13 )
  {
    if ( (unsigned int)v11 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v50 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
    if ( !v50 )
      return (unsigned int)-1073741670;
    *v50 = 0LL;
    v50[1] = 0LL;
    *v50 = PopBsdPowerTransitionAtBoot;
    v51 = xmmword_140C54360;
    goto LABEL_126;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)v11 < 8 )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    LOBYTE(v10) = *(_BYTE *)(v8 + 8);
    return (unsigned int)PopUpdateBackgroundCoolingStatus(v10);
  }
  v15 = v14 - 10;
  if ( !v15 )
  {
    if ( PopPlatformAoAc )
    {
      if ( a4 )
      {
        v64 = ExAllocatePoolWithTag(PagedPool, 0x3B0uLL, 0x206D654Du);
        v65 = v64;
        if ( !v64 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo((__int64)v64);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        *a5 = v65;
        *a6 = 944;
        goto LABEL_121;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741637;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        if ( (unsigned int)v11 < 0x60 || !*(_QWORD *)(v8 + 8) && !a4 )
          return (unsigned int)-1073741789;
        if ( *(_DWORD *)(v8 + 24) == 412 )
        {
          if ( *(_BYTE *)(v8 + 88) || !*(_DWORD *)(v8 + 16) )
          {
            PopBsdPowerWatchdogArmed = 0;
          }
          else
          {
            PopBsdLastPowerWatchdogStage = *(_DWORD *)(v8 + 32);
            PopBsdPowerWatchdogArmed = 1;
          }
        }
        v18 = 0LL;
        if ( a4 )
        {
          v18 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
          if ( !v18 )
            return (unsigned int)-1073741670;
        }
        v19 = PopSetWatchdog(*(char **)(v8 + 8), (unsigned int *)(v8 + 16), *(_BYTE *)(v8 + 88));
        if ( !a4 )
          return 0;
        *v18 = v19;
        *a5 = v18;
        *a6 = 8;
        goto LABEL_50;
      }
    }
    else if ( (_DWORD)v11 == 20 && !a4 )
    {
      LOBYTE(a3) = *(_BYTE *)(v8 + 16);
      TtmNotifySessionTerminalInput(*(unsigned int *)(v8 + 8), *(unsigned int *)(v8 + 12), a3);
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v11 != 20 || a4 )
    return (unsigned int)-1073741811;
  LOBYTE(a2) = *(_BYTE *)(v8 + 12);
  TtmNotifySessionPowerStateChange(*(unsigned int *)(v8 + 8), a2);
  v59 = *(_BYTE *)(v8 + 12);
  PopAcquirePolicyLock(v60);
  if ( *(_BYTE *)(v8 + 13) )
  {
    PopSetDisplayStatus(v59 != 0, v61);
    PopUpdateConsoleDisplayState(v59 != 0);
    if ( v59 )
      PopPowerAggregatorNotifyDisplayPoweredOn();
  }
  PopDiagTraceSessionDisplayStateChange(
    *(_BYTE *)(v8 + 12) == 0,
    *(_DWORD *)(v8 + 8),
    *(unsigned __int8 *)(v8 + 13),
    *(_DWORD *)(v8 + 16));
  PagesFromHiberFile = 0;
  PopReleasePolicyLock(v63, v62);
  return (unsigned int)PagesFromHiberFile;
}
