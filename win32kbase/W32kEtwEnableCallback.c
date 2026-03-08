/*
 * XREFs of W32kEtwEnableCallback @ 0x1C00BE69C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00BE5A0 (McGenControlCallbackV2.c)
 * Callees:
 *     FastGetProfileDword @ 0x1C002E980 (FastGetProfileDword.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C004FD4C (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_UpdateDelayEventThresholds__private_IsEnabledDeviceUsage @ 0x1C00DDEA4 (Feature_UpdateDelayEventThresholds__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C02728BC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LONGLONG v14; // r8
  LONGLONG v15; // rdx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rbx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v32[4]; // [rsp+34h] [rbp-104h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-100h] BYREF
  _BYTE v34[208]; // [rsp+40h] [rbp-F8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v34);
  if ( a2 <= 1 )
  {
    v33 = 0;
    v31 = 0;
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v32, v7, v8, v9);
    FastGetProfileDword(0LL, 2LL, (__int64)L"ThreadUnresponsiveLogTimeout", 200LL, (__int64)&v33);
    FastGetProfileDword(0LL, 2LL, (__int64)L"UserCritAcquireDelayLogTimeout", 1LL, (__int64)&v31);
    if ( !v32[0] )
      UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
    if ( v33 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v33;
      W32kEtwInputProcessDelayTimeoutMs = v33;
    }
    if ( (unsigned int)Feature_UpdateDelayEventThresholds__private_IsEnabledDeviceUsage() )
    {
      W32kEtwMessageCheckDelayTimeoutMs = 200;
      W32kEtwInputProcessDelayTimeoutMs = 50;
    }
    if ( v31 > 1 )
      W32kEtwUserCritAcquireDelayTimeoutms = v31;
    if ( a2 == 1 )
    {
      v14 = 3600 * gliQpcFreq.QuadPart;
      v15 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutms / 1000;
    }
    else
    {
      v14 = -1LL;
      v15 = -1LL;
    }
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = v15;
    W32KEtwUserCritTelemetryThrottleQPC = v14;
    WPP_MAIN_CB.Reserved = (PVOID)a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C02C4068 - 1) <= 2u
       || (qword_1C02C4050 & 0x8000000000040000uLL) == 0
       || (qword_1C02C4058 & 0x8000000000040000uLL) != qword_1C02C4058)
      && LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
      gptiCurrent = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 387) = 1;
        if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v18) )
        {
          while ( 1 )
          {
            v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v21 = *v22;
            v22[2] = 0LL;
            if ( !*(_DWORD *)(v21 + 8) )
            {
              v31 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            }
            HMUnlockObject(*v22);
          }
        }
      }
      LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 0;
      UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v23 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 387) = 1;
      if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v24) )
      {
        while ( 1 )
        {
          v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v25 = *v26;
          v26[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*v26);
        }
      }
    }
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v34);
}
