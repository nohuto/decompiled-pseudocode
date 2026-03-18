/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsForegroundLocked @ 0x1C00A6740 (IsForegroundLocked.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _anonymous_namespace_::StrictIAMForegroundCheck @ 0x1C01000B4 (_anonymous_namespace_--StrictIAMForegroundCheck.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C01000F4 (IsImmersiveBandOrShellManaged.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // r8d
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  bool v6; // bl
  int v7; // edx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  bool v17; // bl
  int v18; // edx
  PDEVICE_OBJECT v19; // rcx
  bool v20; // bl
  int v21; // edx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int16 v25; // [rsp+30h] [rbp-28h]
  __int16 v26; // [rsp+30h] [rbp-28h]
  char v27; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
  {
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 20;
LABEL_15:
    v25 = v7;
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      v7,
      v3,
      v4,
      4,
      2,
      v25,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    return 0;
  }
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)
    || (unsigned int)IsForegroundLocked() )
  {
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 21;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 27) & 8) != 0 )
  {
    v19 = WPP_GLOBAL_Control;
    v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = 22;
LABEL_66:
    v27 = a1;
LABEL_105:
    v26 = v21;
    LOBYTE(v21) = v20;
    WPP_RECORDER_AND_TRACE_SF_q(
      v19->AttachedDevice,
      v21,
      v3,
      v4,
      4,
      2,
      v26,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      v27);
    return 0;
  }
  if ( *(_DWORD *)(v9 + 236) == 15 )
  {
    v19 = WPP_GLOBAL_Control;
    v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = 23;
    goto LABEL_66;
  }
  if ( (unsigned __int8)anonymous_namespace_::StrictIAMForegroundCheck() )
  {
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v13 = 24;
    goto LABEL_32;
  }
  if ( *(int *)(v2 + 12) < 0 )
  {
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v13 = 25;
    goto LABEL_32;
  }
  if ( (unsigned int)IsImmersiveBroker(v2)
    && (unsigned int)IsImmersiveBandOrShellManaged(a1)
    && (*(_DWORD *)(a1 + 320) & 0x800) == 0 )
  {
    if ( IAMThreadAccessGranted(gptiCurrent) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
    v19 = WPP_GLOBAL_Control;
    v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v21 = 26;
    goto LABEL_104;
  }
  if ( (unsigned int)IsImmersiveBroker(v2) )
  {
    if ( gpqForeground )
    {
      v14 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v14 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v14) )
        {
          if ( IAMThreadAccessGranted(gptiCurrent) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          v19 = WPP_GLOBAL_Control;
          v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0;
          v21 = 27;
LABEL_104:
          v27 = v2;
          goto LABEL_105;
        }
      }
    }
  }
  if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2) )
  {
    if ( IAMThreadAccessGranted(gptiCurrent) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 28;
      LOBYTE(v18) = v17;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        28,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        v2,
        a1);
    }
    return 0;
  }
  v12 = WPP_GLOBAL_Control;
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 29;
LABEL_32:
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v10,
      v11,
      v13,
      4,
      2,
      v13,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  }
  return 1;
}
