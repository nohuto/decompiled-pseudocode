/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0132180 (xxxSendWinlogonPowerMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132ECC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1C0133C60 (PowerOffMonitor.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1090 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v7 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v8 = *v7;
          v7[2] = 0LL;
          if ( !*(_DWORD *)(v8 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v7);
        }
      }
    }
  }
}
