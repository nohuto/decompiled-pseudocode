/*
 * XREFs of ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E27C0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C00E56AE (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01DF380 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01DF3A0 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaTimerNotification(CHidInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  struct DEVICEINFO *v10; // rax
  CHidInput *v11; // rcx
  int v12; // eax
  struct DEVICEINFO *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagPOINT *Processor; // rax
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v19, "OnPTPInertiaTimerNotification", 0LL);
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v2, v3, v4);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v8 = *v9;
          v9[2] = 0LL;
          if ( !*(_DWORD *)(v8 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v9);
        }
      }
    }
  }
  v10 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)this + 169), 19);
  LOBYTE(v12) = CHidInput::IsTouchpadDevice(v11, v10);
  if ( v12 )
  {
    Processor = (struct tagPOINT *)CPTPProcessorFactory::GetProcessor(v13);
    if ( Processor )
      CPTPProcessor::HandleInertiaTimer(Processor, (__int64)v13, v15, v16);
  }
  UserSessionSwitchLeaveCrit(v14, (__int64)v13, v15, v16);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v19);
  return 0LL;
}
