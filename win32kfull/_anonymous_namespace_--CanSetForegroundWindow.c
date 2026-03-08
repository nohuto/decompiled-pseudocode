/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0022FA8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C002340C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C00236B0 (IsForegroundLocked.c)
 *     IsDebuggerAttached @ 0x1C0024014 (IsDebuggerAttached.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage @ 0x1C012D160 (Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r14
  PDEVICE_OBJECT v7; // rcx
  bool v8; // di
  int v9; // edx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v18; // rdx
  int v19; // edx
  int v20; // r8d
  int v22; // edx
  int v23; // r8d
  char v24; // r14
  const char *v25; // rax
  __int16 v26; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        37,
        4,
        2,
        37,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    }
    return 1LL;
  }
  if ( *(int *)(v6 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 38;
LABEL_89:
    v26 = v9;
    LOBYTE(v9) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v7->AttachedDevice,
      v9,
      a3,
      a4,
      4,
      2,
      v26,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    return 2LL;
  }
  v10 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    if ( (_DWORD)a2 == 31 )
    {
      gppiLockSFW = 0LL;
      v7 = WPP_GLOBAL_Control;
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v9 = 39;
      goto LABEL_89;
    }
    Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage();
  }
  CurrentProcess = PsGetCurrentProcess(v10, a2, a3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess)
    && **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v7 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 41;
    goto LABEL_89;
  }
  if ( !gfDebugForegroundIgnoreDebugPort )
  {
    if ( (unsigned int)IsDebuggerAttached(v6) && (unsigned int)IsNonImmersiveBand(a1, v12, v13) )
    {
      v7 = WPP_GLOBAL_Control;
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v9 = 42;
      goto LABEL_89;
    }
    if ( gpqForeground )
    {
      v14 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v14 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL))
          && (unsigned int)IsNonImmersiveBand(a1, v15, v16) )
        {
          v7 = WPP_GLOBAL_Control;
          v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v9 = 43;
          goto LABEL_89;
        }
      }
    }
  }
  v8 = 1;
  if ( gptiCurrent == GetProp(a1, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1LL) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 44;
    goto LABEL_89;
  }
  if ( v6 == gppiScreenSaver )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 45;
    goto LABEL_89;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 53) == *(_QWORD *)(gptiCurrent + 424LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v18, v18) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v9 = 46;
    goto LABEL_89;
  }
  if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, v4) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        47,
        4,
        2,
        47,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    }
    if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1658LL);
    return 1LL;
  }
  v24 = anonymous_namespace_::CheckCanonicalForegroundAccess(v4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = "HasRight";
    LOBYTE(v22) = v8;
    if ( !v24 )
      v25 = "NoRights";
    LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v23,
      (_DWORD)gFullLog,
      4,
      2,
      48,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      (__int64)v25);
  }
  if ( v24 )
    return 2LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1676LL);
  return 0LL;
}
