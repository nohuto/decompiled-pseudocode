/*
 * XREFs of W32CalloutDispatch @ 0x1C00ED390
 * Callers:
 *     <none>
 * Callees:
 *     RIMObjectManagerCallout @ 0x1C00360B4 (RIMObjectManagerCallout.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C004FD4C (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     EnterSharedCrit @ 0x1C0050560 (EnterSharedCrit.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     GreIsCurrentProcessSystemCritical @ 0x1C0070248 (GreIsCurrentProcessSystemCritical.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C007026C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserGlobalAtomTableCallout @ 0x1C0072268 (UserGlobalAtomTableCallout.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     CoreMsgObjectCallout @ 0x1C0081F88 (CoreMsgObjectCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0083BC4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0084770 (UserProcessThawCallout.c)
 *     ParseWindowStation @ 0x1C00AA220 (ParseWindowStation.c)
 *     UserUnsafeIsProcessDwm @ 0x1C00AAB60 (UserUnsafeIsProcessDwm.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C00ABDB8 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00AFD30 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00B7A1C (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     UserJobCallout @ 0x1C00BD268 (UserJobCallout.c)
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00CF148 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00D43A0 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x1C00DCCB0 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage @ 0x1C00DCD04 (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage.c)
 *     Win32WatchdogLiveKernelDumpCaptureInfo @ 0x1C00DD6D0 (Win32WatchdogLiveKernelDumpCaptureInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     UserProcessTimerDelayCallout @ 0x1C015456C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01549FC (UserProcessTimerStatisticsCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C01599EC (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  bool v10; // bp
  void *v11; // rdx
  unsigned int SubsystemProcess; // eax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(unsigned int *); // rax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  struct tagTHREADINFO *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rdi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE v50[208]; // [rsp+60h] [rbp-F8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v50);
  v9 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0
    && (unsigned int)GreIsCurrentProcessSystemCritical()
    && (unsigned int)a2 >= 2 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = &WPP_8de2a1af8c7e334c4353e58308925ea3_Traceguids;
      LOBYTE(v11) = v10;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        17,
        12,
        (__int64)&WPP_8de2a1af8c7e334c4353e58308925ea3_Traceguids,
        a2);
    }
    v9 = -1073740004;
    goto LABEL_158;
  }
  if ( a2 == 1 )
  {
    if ( !qword_1C02D63D8 || (int)qword_1C02D63D8() < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1040);
    if ( qword_1C02D63E0 )
    {
      SubsystemProcess = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D63E0)(*(_QWORD *)a3, a3[2]);
      goto LABEL_157;
    }
LABEL_154:
    v9 = -1073741637;
    goto LABEL_158;
  }
  if ( a2 > 23 )
  {
    if ( a2 > 35 )
    {
      if ( a2 > 41 )
      {
        v43 = a2 - 42;
        if ( !v43 )
        {
          SubsystemProcess = UserProcessTimerStatisticsCallout(a3);
          goto LABEL_157;
        }
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( !v45 )
          {
            if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
            {
              DxNotifyProcessFreezeCallout(a3);
              goto LABEL_158;
            }
            goto LABEL_152;
          }
          if ( v45 == 1 )
          {
            if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
            {
              DxNotifyProcessThawCallout(a3);
              goto LABEL_158;
            }
            goto LABEL_152;
          }
        }
        else if ( (unsigned int)Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage() )
        {
          SubsystemProcess = Win32WatchdogLiveKernelDumpCaptureInfo((__int64)a3, v46, v47, v48);
          goto LABEL_157;
        }
        goto LABEL_150;
      }
      if ( a2 == 41 )
      {
        SubsystemProcess = UserProcessTimerDelayCallout(a3);
        goto LABEL_157;
      }
      if ( a2 != 36 )
      {
        if ( a2 == 37 || a2 == 38 || (unsigned int)(a2 - 39) <= 1 )
        {
          SubsystemProcess = ForegroundManagement::ActivationObjectCallout(
                               a2,
                               (struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
          goto LABEL_157;
        }
        goto LABEL_150;
      }
    }
    else if ( a2 != 35 )
    {
      if ( a2 <= 29 )
      {
        if ( a2 != 29 )
        {
          switch ( a2 )
          {
            case 24:
              DxGetProcessInterferenceCount(*(_QWORD *)a3, *((_QWORD *)a3 + 1));
              goto LABEL_158;
            case 25:
              DxGetGpuUsageStatistics(a3);
              goto LABEL_158;
            case 26:
              SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
              goto LABEL_157;
          }
          if ( (unsigned int)(a2 - 27) > 1 )
            goto LABEL_150;
        }
LABEL_111:
        SubsystemProcess = RIMObjectManagerCallout(a2, (__int64)a3);
        goto LABEL_157;
      }
      switch ( a2 )
      {
        case 30:
          goto LABEL_111;
        case 31:
          if ( qword_1C02D6BF8 )
          {
            SubsystemProcess = qword_1C02D6BF8();
            goto LABEL_157;
          }
          goto LABEL_154;
        case 32:
          v39 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v39;
          if ( v39 )
          {
            *((_DWORD *)v39 + 387) = 1;
            if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v40) )
            {
              while ( 1 )
              {
                v42 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v41 = *v42;
                v42[2] = 0LL;
                if ( !*(_DWORD *)(v41 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v42);
              }
            }
          }
          if ( UserUnsafeIsProcessDwm((__int64)a3) && !gbNoMoreDITHitTest )
          {
            gbInMitRitHandOff = 0;
            EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
            gbNoMoreDITHitTest = 1;
          }
          goto LABEL_130;
      }
      if ( (unsigned int)(a2 - 33) > 1 )
        goto LABEL_150;
    }
    SubsystemProcess = CoreMsgObjectCallout(a2, a3);
    goto LABEL_157;
  }
  if ( a2 == 23 )
  {
    if ( !(unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
      DxNotifyProcessThawCallout(a3);
    SubsystemProcess = UserProcessThawCallout((__int64)a3, v36, v37, v38);
    goto LABEL_157;
  }
  if ( a2 > 12 )
  {
    if ( a2 > 18 )
    {
      v29 = a2 - 19;
      if ( !v29 )
      {
        SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        goto LABEL_157;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*((_QWORD *)a3 + 1) + 8LL)
                                                                             + 40LL))(
                             *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL),
                             a3);
        goto LABEL_157;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
        if ( !v35 )
          goto LABEL_158;
        SubsystemProcess = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 48LL))(v35, a3);
        goto LABEL_157;
      }
      if ( v31 == 1 )
      {
        if ( !(unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
          DxNotifyProcessFreezeCallout(a3);
        SubsystemProcess = UserProcessFreezeCallout((__int64)a3, v32, v33, v34);
        goto LABEL_157;
      }
    }
    else
    {
      if ( a2 == 18 )
      {
        SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        goto LABEL_157;
      }
      v25 = a2 - 13;
      if ( !v25 )
      {
        if ( !qword_1C02D6540 || (int)qword_1C02D6540() < 0 )
          goto LABEL_154;
        v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6548;
        goto LABEL_52;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( !qword_1C02D6550 || (int)qword_1C02D6550() < 0 )
          goto LABEL_154;
        v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6558;
        goto LABEL_52;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        SubsystemProcess = ParseWindowStation((__int64)a3);
        goto LABEL_157;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( !qword_1C02D6560 || (int)qword_1C02D6560() < 0 )
          goto LABEL_154;
        v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6568;
        goto LABEL_52;
      }
      if ( v28 == 1 )
        goto LABEL_158;
    }
LABEL_150:
    if ( !(unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1245);
LABEL_152:
    if ( !(unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
    {
      v9 = -1073741811;
      goto LABEL_158;
    }
    goto LABEL_154;
  }
  if ( a2 == 12 )
  {
    if ( !qword_1C02D64B0 || (int)qword_1C02D64B0() < 0 )
      goto LABEL_154;
    v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D64B8;
    goto LABEL_52;
  }
  if ( a2 <= 6 )
  {
    if ( a2 == 6 )
    {
      if ( qword_1C02D63E8 && (int)qword_1C02D63E8() >= 0 )
      {
        SubsystemProcess = UserJobCallout();
        goto LABEL_157;
      }
      goto LABEL_154;
    }
    if ( a2 )
    {
      v13 = a2 - 2;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            SubsystemProcess = UserPowerStateCallout((char *)a3);
            goto LABEL_157;
          }
          if ( v15 == 1 )
          {
            LOBYTE(v5) = *((_BYTE *)a3 + 4);
            SubsystemProcess = UserPowerInfoCallout(*a3, v5, a3[2], *((int **)a3 + 2), a3[6], *((_DWORD **)a3 + 4));
            goto LABEL_157;
          }
          goto LABEL_150;
        }
        if ( !*(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 2936) || !gbVideoInitialized )
        {
          v9 = -1073741823;
          goto LABEL_158;
        }
        SubsystemProcess = QueuePowerRequest(a3, 0);
LABEL_157:
        v9 = SubsystemProcess;
        goto LABEL_158;
      }
      EnterSharedCrit();
      *(_QWORD *)a3 = UserGlobalAtomTableCallout();
LABEL_130:
      UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
      goto LABEL_158;
    }
    if ( !qword_1C02D63C8 || (int)qword_1C02D63C8() < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1049);
    v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D63D0;
LABEL_52:
    if ( v20 )
    {
      SubsystemProcess = v20(a3);
      goto LABEL_157;
    }
    goto LABEL_154;
  }
  v21 = a2 - 7;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( !v22 )
    {
      if ( !qword_1C02D6470 || (int)qword_1C02D6470() < 0 )
        goto LABEL_154;
      v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6478;
      goto LABEL_52;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      if ( !qword_1C02D6480 || (int)qword_1C02D6480() < 0 )
        goto LABEL_154;
      v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6488;
      goto LABEL_52;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      if ( !qword_1C02D6490 || (int)qword_1C02D6490() < 0 )
        goto LABEL_154;
      v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D6498;
      goto LABEL_52;
    }
    if ( v24 == 1 )
    {
      if ( !qword_1C02D64A0 || (int)qword_1C02D64A0() < 0 )
        goto LABEL_154;
      v20 = (__int64 (__fastcall *)(unsigned int *))qword_1C02D64A8;
      goto LABEL_52;
    }
    goto LABEL_150;
  }
  if ( qword_1C02D5FD8 && (int)qword_1C02D5FD8() >= 0 && qword_1C02D5FE0 )
    qword_1C02D5FE0();
LABEL_158:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v50);
  return v9;
}
