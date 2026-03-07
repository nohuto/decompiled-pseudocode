__int64 __fastcall NtUserSetSystemContentRects(unsigned int a1, char *Src)
{
  __int64 v3; // r14
  int v4; // r8d
  int v5; // ebx
  bool v6; // cl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  bool v10; // cl
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  bool v17; // cl
  int v18; // edx
  struct tagRECT v20[4]; // [rsp+70h] [rbp-68h] BYREF

  v3 = a1;
  v5 = 0;
  if ( (int)CheckCapability(L"windowManagementSystem") < 0 )
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 122;
      LOBYTE(v7) = v6;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        122,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v8 = 5;
    goto LABEL_39;
  }
  if ( (unsigned int)v3 > 4 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9324);
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 123;
      LOBYTE(v11) = v10;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        123,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        4,
        v3);
    }
    goto LABEL_38;
  }
  if ( !(_DWORD)v3 || !Src )
  {
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 124;
      LOBYTE(v18) = v17;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        124,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    goto LABEL_38;
  }
  memset(v20, 0, sizeof(v20));
  v16 = 16 * v3;
  if ( 16 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v13, v12, v14, v15) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v16] > MmUserProbeAddress || &Src[v16] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v20, Src, 16 * v3);
  if ( !CContentRects::SetContentRects(v3, v20) )
  {
LABEL_38:
    v8 = 87;
LABEL_39:
    UserSetLastError(v8);
    return v5;
  }
  return 1;
}
