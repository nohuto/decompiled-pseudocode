/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00056A0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, char a2)
{
  __int64 CurrentProcessWin32Process; // rbp
  int v5; // edx
  __int64 v6; // r8
  bool v7; // r15
  char v8; // bl
  __int64 v9; // rcx
  char v11; // cl
  char v12; // al
  char v13; // di
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // r9
  __int16 v16; // cx
  __int64 v17; // rcx
  __int16 v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+40h] [rbp-28h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (unsigned int)IsDesktopApp(CurrentProcessWin32Process) != 0;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x100) != 0 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)WPP_GLOBAL_Control,
        4,
        2,
        15,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        CurrentProcessWin32Process);
    }
    return 1;
  }
  v8 = 1;
  if ( *(_DWORD *)(CurrentProcessWin32Process + 884) )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    {
      v11 = a2;
      v12 = a2 | 1;
      v13 = a2 & 0xFE;
      if ( (v11 & 8) != 0 )
        v13 = v12;
      if ( (v13 & 0x10) != 0 )
        a2 = v13 | 2;
      else
        a2 = v13 & 0xFD;
    }
    if ( (a2 & 1) == 0 )
    {
      v5 = *(_DWORD *)(CurrentProcessWin32Process + 884);
      LODWORD(v6) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 884LL);
      if ( v5 != (_DWORD)v6 && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v19 = CurrentProcessWin32Process;
        v18 = 16;
        goto LABEL_32;
      }
    }
    if ( (a2 & 2) != 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
      goto LABEL_4;
    }
    if ( gpqForeground )
    {
      v6 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
      if ( *(_DWORD *)(v6 + 884) != v5 )
      {
        PtiKbdFromQ(v14);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
        {
          v15 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v8 = 0;
          }
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          v16 = 17;
          goto LABEL_31;
        }
      }
    }
  }
  if ( !v7 )
  {
LABEL_7:
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)WPP_GLOBAL_Control,
        4,
        2,
        19,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    }
    return 1;
  }
LABEL_4:
  if ( !gpqForeground )
    goto LABEL_7;
  v9 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v9 || (unsigned int)IsNonImmersiveBand(v9) )
    goto LABEL_7;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 18;
LABEL_31:
    v19 = CurrentProcessWin32Process;
    v18 = v16;
LABEL_32:
    LOBYTE(v5) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      v15->AttachedDevice,
      v5,
      v6,
      (_DWORD)v15,
      4,
      2,
      v18,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      v19);
  }
  return 0;
}
