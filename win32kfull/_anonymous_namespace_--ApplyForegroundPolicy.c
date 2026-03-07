__int64 __fastcall anonymous_namespace_::ApplyForegroundPolicy(__int64 a1)
{
  char v2; // bl
  int v3; // ebp
  HANDLE ProcessId; // r14
  unsigned int v5; // ecx
  HANDLE *v6; // rdx
  void *v7; // rdx
  int v8; // r8d
  __int64 result; // rax
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  int v15; // eax
  const char *v16; // rax
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rdi
  void *v20; // rdx
  int v21; // [rsp+20h] [rbp-78h]
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  void *v24; // [rsp+38h] [rbp-60h]
  char v25; // [rsp+40h] [rbp-58h]

  v2 = 1;
  v3 = 1;
  ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C0362418, 0LL);
  v5 = 5;
  v6 = (HANDLE *)&unk_1C0361228;
  while ( *v6 != ProcessId )
  {
    ++v5;
    v6 += 3;
    if ( v5 >= 0xF )
      goto LABEL_4;
  }
  v19 = 3LL * v5;
  v3 = qword_1C03611B0[3 * v5 + 1];
  if ( (v3 & 0xFFFFFFFB) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 410LL);
  if ( HIDWORD(qword_1C03611B0[v19 + 1]) )
  {
    LODWORD(qword_1C03611B0[v19 + 1]) = 0;
  }
  else
  {
    *(_OWORD *)&qword_1C03611B0[v19] = 0LL;
    qword_1C03611B0[v19 + 2] = 0LL;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(&unk_1C0362418, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = &WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids;
    LOWORD(v23) = 14;
    v22 = 2;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dD(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v7,
      v8,
      (unsigned int)&WPP_RECORDER_INITIALIZED);
  }
  result = gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) == 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = (char)ProcessId;
      v18 = 15;
      goto LABEL_50;
    }
    return result;
  }
  if ( (unsigned int)IsImmersiveAppRestricted(a1) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v18 = 16;
LABEL_49:
    v7 = &WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids;
    v25 = (char)ProcessId;
LABEL_50:
    LOBYTE(v7) = v2;
    return WPP_RECORDER_AND_TRACE_SF_D(
             v17->AttachedDevice,
             (_DWORD)v7,
             v8,
             (_DWORD)gFullLog,
             4,
             2,
             v18,
             (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
             v25);
  }
  v10 = *(_DWORD *)(a1 + 12);
  if ( (v10 & 0x40) == 0 )
  {
    if ( v3 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 449LL);
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v18 = 17;
    goto LABEL_49;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = &WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids;
        LOBYTE(v20) = v2;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        result = WPP_RECORDER_AND_TRACE_SF_D(
                   WPP_GLOBAL_Control->AttachedDevice,
                   (_DWORD)v20,
                   v8,
                   (_DWORD)gFullLog,
                   4,
                   2,
                   19,
                   (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
                   (char)ProcessId);
      }
      *(_DWORD *)(a1 + 12) |= 0x100u;
    }
    else
    {
      if ( v3 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 481LL);
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v8,
          (_DWORD)gFullLog,
          4,
          2,
          20,
          (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
          (char)ProcessId);
      }
      Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage(v11);
      v15 = *(_DWORD *)(a1 + 12);
      if ( v15 < 0 )
        *(_DWORD *)(a1 + 12) = v15 | 0x100;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (_DWORD)gFullLog,
          4,
          2,
          21,
          (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
          (char)ProcessId);
      }
      if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 && anonymous_namespace_::CheckAllowForeground(*(_QWORD *)a1) )
        *(_DWORD *)(a1 + 12) |= 0x100u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = "given";
        if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
          v16 = "NOT given";
        return (__int64)WPP_RECORDER_AND_TRACE_SF_sD(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          v2,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          v14,
                          v21,
                          v22,
                          v23,
                          (int)v24,
                          v16);
      }
    }
    return result;
  }
  if ( (v10 & 0x100) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 462LL);
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 18;
    goto LABEL_49;
  }
  return result;
}
