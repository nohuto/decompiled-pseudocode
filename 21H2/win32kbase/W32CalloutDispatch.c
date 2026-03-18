/*
 * XREFs of W32CalloutDispatch @ 0x1C00E4D10
 * Callers:
 *     <none>
 * Callees:
 *     GreIsCurrentProcessSystemCritical @ 0x1C0016FA0 (GreIsCurrentProcessSystemCritical.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0016FC4 (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C001DDB0 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserUnsafeIsProcessDwm @ 0x1C003A680 (UserUnsafeIsProcessDwm.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     RIMObjectManagerCallout @ 0x1C004913C (RIMObjectManagerCallout.c)
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C007BFDC (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C007C340 (QueuePowerRequest.c)
 *     UserGlobalAtomTableCallout @ 0x1C0089494 (UserGlobalAtomTableCallout.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C009407C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ParseWindowStation @ 0x1C0098FC0 (ParseWindowStation.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C009E71C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserProcessThawCallout @ 0x1C00ACCFC (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00AD1B4 (UserProcessFreezeCallout.c)
 *     CoreMsgObjectCallout @ 0x1C00B30E8 (CoreMsgObjectCallout.c)
 *     UserJobCallout @ 0x1C00B8BD0 (UserJobCallout.c)
 *     ?ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00C3758 (-ActivationObjectCallout@ForegroundManagement@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5A80 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserProcessTimerDelayCallout @ 0x1C0141E14 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01421FC (UserProcessTimerStatisticsCallout.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C0146864 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  char v9; // bp
  bool v10; // zf
  int v11; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  unsigned int SubsystemProcess; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 (__fastcall *v26)(unsigned int *); // rax
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  struct tagKERNELHANDLETABLEENTRY *v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rdi
  int v54; // edi
  _BYTE v55[16]; // [rsp+50h] [rbp-18h] BYREF

  v8 = 0;
  v9 = 1;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() < 0 || !(unsigned int)GreIsCurrentProcessSystemCritical() )
  {
    v10 = a2 == 1;
LABEL_13:
    if ( v10 )
    {
      if ( !qword_1C029BB20 || (int)qword_1C029BB20() < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      if ( qword_1C029BB28 )
        return (unsigned int)qword_1C029BB28(*(_QWORD *)a3, a3[2]);
      else
        return (unsigned int)-1073741637;
    }
    CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v55);
    if ( a2 > 40 )
    {
      v54 = a2 - 41;
      if ( !v54 )
      {
        SubsystemProcess = UserProcessTimerDelayCallout(a3);
        goto LABEL_132;
      }
      if ( v54 == 1 )
      {
        SubsystemProcess = UserProcessTimerStatisticsCallout(a3);
        goto LABEL_132;
      }
      goto LABEL_129;
    }
    if ( a2 >= 37 )
    {
      SubsystemProcess = ForegroundManagement::ActivationObjectCallout(a2, (struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
      goto LABEL_132;
    }
    if ( a2 <= 16 )
    {
      if ( a2 == 16 )
      {
        if ( !qword_1C029BCA8 || (int)qword_1C029BCA8() < 0 )
          goto LABEL_122;
        v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BCB0;
      }
      else
      {
        if ( a2 <= 8 )
        {
          if ( a2 != 8 )
          {
            if ( a2 )
            {
              v16 = a2 - 2;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    SubsystemProcess = UserPowerStateCallout((char *)a3);
                    goto LABEL_132;
                  }
                  v19 = v18 - 1;
                  if ( !v19 )
                  {
                    LOBYTE(v13) = *((_BYTE *)a3 + 4);
                    SubsystemProcess = UserPowerInfoCallout(
                                         *a3,
                                         v13,
                                         a3[2],
                                         *((int **)a3 + 2),
                                         a3[6],
                                         *((int **)a3 + 4));
                    goto LABEL_132;
                  }
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 == 1 )
                    {
                      if ( qword_1C029B7D0 && (int)qword_1C029B7D0() >= 0 && qword_1C029B7D8 )
                        qword_1C029B7D8();
                      goto LABEL_133;
                    }
                    goto LABEL_129;
                  }
                  if ( qword_1C029BB30 && (int)qword_1C029BB30() >= 0 )
                  {
                    SubsystemProcess = UserJobCallout();
LABEL_132:
                    v8 = SubsystemProcess;
                    goto LABEL_133;
                  }
                  goto LABEL_122;
                }
                if ( gbPowerCalloutsReady && gbVideoInitialized )
                {
                  SubsystemProcess = QueuePowerRequest(a3, 0);
                  goto LABEL_132;
                }
                v8 = -1073741823;
                goto LABEL_133;
              }
              EnterSharedCrit();
              *(_QWORD *)a3 = UserGlobalAtomTableCallout();
LABEL_119:
              UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
              goto LABEL_133;
            }
            if ( !qword_1C029BB10 || (int)qword_1C029BB10() < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
            v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BB18;
            goto LABEL_65;
          }
          if ( qword_1C029BBB8 && (int)qword_1C029BBB8() >= 0 )
          {
            v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BBC0;
            goto LABEL_65;
          }
LABEL_122:
          v8 = -1073741637;
          goto LABEL_133;
        }
        v27 = a2 - 9;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  v32 = v31 - 1;
                  if ( v32 )
                  {
                    if ( v32 == 1 )
                    {
                      SubsystemProcess = ParseWindowStation((__int64)a3);
                      goto LABEL_132;
                    }
                    goto LABEL_129;
                  }
                  if ( !qword_1C029BC98 || (int)qword_1C029BC98() < 0 )
                    goto LABEL_122;
                  v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BCA0;
                }
                else
                {
                  if ( !qword_1C029BC88 || (int)qword_1C029BC88() < 0 )
                    goto LABEL_122;
                  v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BC90;
                }
              }
              else
              {
                if ( !qword_1C029BBF8 || (int)qword_1C029BBF8() < 0 )
                  goto LABEL_122;
                v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BC00;
              }
            }
            else
            {
              if ( !qword_1C029BBE8 || (int)qword_1C029BBE8() < 0 )
                goto LABEL_122;
              v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BBF0;
            }
          }
          else
          {
            if ( !qword_1C029BBD8 || (int)qword_1C029BBD8() < 0 )
              goto LABEL_122;
            v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BBE0;
          }
        }
        else
        {
          if ( !qword_1C029BBC8 || (int)qword_1C029BBC8() < 0 )
            goto LABEL_122;
          v26 = (__int64 (__fastcall *)(unsigned int *))qword_1C029BBD0;
        }
      }
LABEL_65:
      if ( v26 )
      {
        SubsystemProcess = v26(a3);
        goto LABEL_132;
      }
      goto LABEL_122;
    }
    if ( a2 > 24 )
    {
      if ( a2 == 25 )
      {
        ((void (__fastcall *)(unsigned int *))qword_1C0296860)(a3);
        goto LABEL_133;
      }
      if ( a2 == 26 )
      {
        SubsystemProcess = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
        goto LABEL_132;
      }
      if ( a2 <= 30 )
      {
        SubsystemProcess = RIMObjectManagerCallout(a2, (__int64)a3);
        goto LABEL_132;
      }
      if ( a2 == 31 )
      {
        if ( qword_1C029C3B0 )
        {
          SubsystemProcess = qword_1C029C3B0();
          goto LABEL_132;
        }
        goto LABEL_122;
      }
      if ( a2 == 32 )
      {
        v44 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
        gptiCurrent = v44;
        if ( v44 )
        {
          *((_DWORD *)v44 + 377) = 1;
          if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v46, v45, v47, v48) )
          {
            while ( 1 )
            {
              v53 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v51 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v52 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v51;
              if ( !*(_DWORD *)(v52 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v49, v50);
                v52 = *v53;
              }
              HMUnlockObject(v52);
            }
          }
        }
        if ( UserUnsafeIsProcessDwm(a3) && !gbNoMoreDITHitTest )
        {
          gbInMitRitHandOff = 0;
          EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
          gbNoMoreDITHitTest = 1;
        }
        goto LABEL_119;
      }
      if ( (unsigned int)(a2 - 33) <= 3 )
      {
        SubsystemProcess = CoreMsgObjectCallout(a2, a3);
        goto LABEL_132;
      }
    }
    else
    {
      if ( a2 == 24 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))qword_1C0296858)(*(_QWORD *)a3, *((_QWORD *)a3 + 1));
        goto LABEL_133;
      }
      v33 = a2 - 17;
      if ( !v33 )
      {
LABEL_133:
        CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v55, v13, v15);
        return v8;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        SubsystemProcess = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        goto LABEL_132;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        SubsystemProcess = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        goto LABEL_132;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        SubsystemProcess = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*((_QWORD *)a3 + 1) + 8LL)
                                                                             + 40LL))(
                             *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL),
                             a3);
        goto LABEL_132;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        v43 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
        if ( v43 )
        {
          SubsystemProcess = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 48LL))(v43, a3);
          goto LABEL_132;
        }
        goto LABEL_133;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        ((void (__fastcall *)(unsigned int *))qword_1C0296690)(a3);
        SubsystemProcess = UserProcessFreezeCallout((__int64)a3, v41, v42);
        goto LABEL_132;
      }
      if ( v38 == 1 )
      {
        ((void (__fastcall *)(unsigned int *))qword_1C0296698)(a3);
        SubsystemProcess = UserProcessThawCallout((__int64)a3, v39, v40);
        goto LABEL_132;
      }
    }
LABEL_129:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    v8 = -1073741811;
    goto LABEL_133;
  }
  v10 = a2 == 1;
  if ( (unsigned int)a2 <= 1 )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 12;
    LOBYTE(v11) = v9;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      17,
      12,
      (__int64)&WPP_55a08082dbd636251a5824c03d734996_Traceguids,
      a2);
  }
  return 3221227292LL;
}
