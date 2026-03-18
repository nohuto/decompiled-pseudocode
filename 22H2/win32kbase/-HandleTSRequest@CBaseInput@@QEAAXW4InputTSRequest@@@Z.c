/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0
 * Callers:
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0057FD0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00B322C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // rbp
  _UNKNOWN **v4; // rax
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v16; // rbx
  bool v17; // di
  int v18; // edx
  __int64 v19; // rax

  v2 = a2;
  LOBYTE(v4) = isChildPartition();
  if ( !(_BYTE)v4 )
  {
    if ( *((_DWORD *)a1 + 334) )
    {
      if ( (unsigned int)v2 < 4 )
      {
        if ( *((_DWORD *)&unk_1C023C760 + 6 * v2) != (_DWORD)v2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1080LL);
        if ( *((_DWORD *)&unk_1C023C760 + 6 * v2 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          (*((void (__fastcall **)(CBaseInput *))&unk_1C023C760 + 3 * v2 + 1))(a1);
        }
        else
        {
          UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C023C760 + 6 * v2 + 4));
          v13 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v10, v11, v12);
          gptiCurrent = v13;
          if ( v13 )
          {
            *((_DWORD *)v13 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v19 = *v16;
                  v16[2] = 0LL;
                  if ( !*(_DWORD *)(v19 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                  HMUnlockObject(*v16);
                }
              }
            }
          }
        }
      }
      LOBYTE(v4) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
    }
    else
    {
      if ( (((_DWORD)v2 - 1) & 0xFFFFFFFD) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1012LL);
      v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v4 = &WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 11;
        LOBYTE(v18) = v17;
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v18,
                       v5,
                       WPP_MAIN_CB.Queue.ListEntry.Flink,
                       3,
                       3,
                       11,
                       (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
      }
    }
  }
  return (char)v4;
}
