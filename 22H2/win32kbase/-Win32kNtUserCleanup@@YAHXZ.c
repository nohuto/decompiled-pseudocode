/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ImSessionStop @ 0x1C007B908 (ImSessionStop.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B1CB8 (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     CleanupLogonProcess @ 0x1C00B1D00 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00CFFF4 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     ??9?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEBAH$$T@Z @ 0x1C00D01A0 (--9-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEBAH$$T@Z.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z @ 0x1C00D0CEC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      10,
      (__int64)&WPP_ac18f6c865c032c1f7ac00466daa9397_Traceguids);
  if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(v3, a2, a3) && gbImInitialized )
  {
    ImSessionStop();
    gbImInitialized = 0;
  }
  if ( (unsigned int)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator!=() )
  {
    ApiSetEditionBaseDriverUnloadUninitialize();
    v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v4, v5, v6);
    gptiCurrent = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 387) = 1;
      if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v8) )
      {
        while ( 1 )
        {
          v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v9 = *v10;
          v10[2] = 0LL;
          if ( !*(_DWORD *)(v9 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v10);
        }
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
    v19 = SGDGetUserSessionState(v16, v15, v17, v18);
    CLEANUP_CRIT_RESOURCE((struct _ERESOURCE **)(v19 + 8));
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1
    && (int)ext_ms_win_moderncore_win32k_base_ntuser_l1() >= 0
    && qword_1C0294FE8 )
  {
    qword_1C0294FE8();
  }
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess(1LL);
  if ( qword_1C0295000 && (int)qword_1C0295000() >= 0 && qword_1C0295008 )
    qword_1C0295008();
  return 1LL;
}
