/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C005CF68 (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C005E09C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsForegroundLocked @ 0x1C005FED4 (IsForegroundLocked.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C01AE738 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // r8d
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  char v11; // bl
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v16; // rdx
  int v17; // eax
  int v18; // r8d
  PDEVICE_OBJECT v19; // rcx
  char v20; // bl
  int v21; // eax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  char v29; // bl
  int v30; // edx
  __int16 v31; // [rsp+30h] [rbp-38h]
  __int16 v32; // [rsp+30h] [rbp-38h]
  __int16 v33; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 28;
    goto LABEL_89;
  }
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)
    || (unsigned int)IsForegroundLocked() )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v6 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 29;
LABEL_89:
    v33 = v7;
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      v7,
      v3,
      v4,
      4,
      2,
      v33,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 27) & 8) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v11 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v12 = 30;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v9 + 236) != 15 )
  {
    if ( *(int *)(v2 + 12) < 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v14 = 32;
      goto LABEL_37;
    }
    if ( (unsigned int)IsImmersiveBroker(v2)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1, v16)
      && (*(_DWORD *)(a1 + 320) & 0x800) == 0 )
    {
      LOBYTE(v17) = IAMThreadAccessGranted(gptiCurrent);
      if ( v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1380LL);
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v20 = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_DWORD *)(v2 + 12);
      v22 = 33;
    }
    else
    {
      if ( !(unsigned int)IsImmersiveBroker(v2)
        || !gpqForeground
        || (v24 = *(_QWORD *)(gpqForeground + 128LL)) == 0
        || !(unsigned int)IsImmersiveBandOrShellManaged(v24, v23) )
      {
        if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL) )
        {
          LOBYTE(v26) = IAMThreadAccessGranted(gptiCurrent);
          if ( v26 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v29 = 0;
          }
          if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = 35;
            LOBYTE(v30) = v29;
            LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, v30, v27, v28);
          }
          return 0;
        }
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1;
        v14 = 36;
LABEL_37:
        WPP_RECORDER_AND_TRACE_SF_(
          v13->AttachedDevice,
          v8,
          v3,
          v14,
          4,
          2,
          v14,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        return 1;
      }
      LOBYTE(v25) = IAMThreadAccessGranted(gptiCurrent);
      if ( v25 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1391LL);
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v20 = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v21 = *(_DWORD *)(v2 + 56);
      v22 = 34;
    }
    v32 = v22;
    LOBYTE(v22) = v20;
    WPP_RECORDER_AND_TRACE_SF_D(
      v19->AttachedDevice,
      v22,
      v18,
      (_DWORD)gFullLog,
      4,
      2,
      v32,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v21);
    return 0;
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0;
  v12 = 31;
LABEL_28:
  v31 = v12;
  LOBYTE(v12) = v11;
  WPP_RECORDER_AND_TRACE_SF_q(
    v10->AttachedDevice,
    v12,
    v3,
    v4,
    4,
    2,
    v31,
    (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
    *(_QWORD *)a1);
  return 0;
}
