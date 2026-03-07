__int64 __fastcall Win32kNtUserCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
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
      15,
      10,
      (__int64)&WPP_e58a4daabae13b57bd97824ed9a307f2_Traceguids);
  if ( (unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage(v3, a2, a3) && gbImInitialized )
  {
    ImSessionStop();
    gbImInitialized = 0;
  }
  if ( (unsigned int)SGDCRITTYPEgpresUser<_USERCRIT_TYPE>::operator!=() )
  {
    ApiSetEditionBaseDriverUnloadUninitialize();
    v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 387) = 1;
      if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v5) )
      {
        while ( 1 )
        {
          v7 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v6 = *v7;
          v7[2] = 0LL;
          if ( !*(_DWORD *)(v6 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v7);
        }
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
    v16 = SGDGetUserSessionState(v13, v12, v14, v15);
    CLEANUP_CRIT_RESOURCE((union _USERCRIT_TYPE *)(v16 + 8));
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1
    && (int)ext_ms_win_moderncore_win32k_base_ntuser_l1() >= 0
    && qword_1C02D6168 )
  {
    qword_1C02D6168();
  }
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( qword_1C02D6180 && (int)qword_1C02D6180() >= 0 && qword_1C02D6188 )
    qword_1C02D6188();
  return 1LL;
}
