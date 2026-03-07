char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // r8d
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  int v7; // edx
  __int64 v8; // rcx
  PDEVICE_OBJECT v9; // rcx
  char v10; // bl
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  __int64 v17; // rdx
  int v18; // r8d
  PDEVICE_OBJECT v19; // rcx
  char v20; // bl
  int v21; // eax
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d
  char v27; // bl
  int v28; // edx
  __int16 v29; // [rsp+30h] [rbp-38h]
  __int16 v30; // [rsp+30h] [rbp-38h]
  __int16 v31; // [rsp+30h] [rbp-38h]

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
    v7 = 27;
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
    v7 = 28;
LABEL_89:
    v31 = v7;
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      v7,
      v3,
      v4,
      4,
      2,
      v31,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 27) & 8) != 0 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v10 = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v11 = 29;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v8 + 236) != 15 )
  {
    Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage();
    if ( *(int *)(v2 + 12) < 0 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v15 = 32;
      goto LABEL_37;
    }
    if ( (unsigned int)IsImmersiveBroker(v2)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1, v17)
      && (*(_DWORD *)(a1 + 320) & 0x800) == 0 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1389LL);
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
          if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1409LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v27 = 0;
          }
          if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = 35;
            LOBYTE(v28) = v27;
            LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, v28, v25, v26);
          }
          return 0;
        }
        v14 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1;
        v15 = 36;
LABEL_37:
        WPP_RECORDER_AND_TRACE_SF_(
          v14->AttachedDevice,
          v12,
          v13,
          v15,
          4,
          2,
          v15,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        return 1;
      }
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
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
    v30 = v22;
    LOBYTE(v22) = v20;
    WPP_RECORDER_AND_TRACE_SF_D(
      v19->AttachedDevice,
      v22,
      v18,
      (_DWORD)gFullLog,
      4,
      2,
      v30,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      v21);
    return 0;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0;
  v11 = 30;
LABEL_28:
  v29 = v11;
  LOBYTE(v11) = v10;
  WPP_RECORDER_AND_TRACE_SF_q(
    v9->AttachedDevice,
    v11,
    v3,
    v4,
    4,
    2,
    v29,
    (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
    *(_QWORD *)a1);
  return 0;
}
