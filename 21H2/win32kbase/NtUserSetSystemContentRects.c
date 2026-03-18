/*
 * XREFs of NtUserSetSystemContentRects @ 0x1C01628A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     CheckCapability @ 0x1C01E77C0 (CheckCapability.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetSystemContentRects(unsigned int a1, char *Src)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  bool v9; // cl
  _UNKNOWN **v10; // rdx
  int v11; // edx
  __int64 v12; // rcx
  bool v13; // cl
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  bool v19; // cl
  int v20; // edx
  struct tagRECT v22[4]; // [rsp+70h] [rbp-68h] BYREF

  v3 = a1;
  v8 = 0;
  if ( (int)CheckCapability(L"windowManagementSystem") < 0 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 116;
      LOBYTE(v11) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        116,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    }
    v12 = 5LL;
    goto LABEL_39;
  }
  if ( (unsigned int)v3 > 4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 117;
      LOBYTE(v14) = v13;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        117,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        4,
        v3);
    }
    goto LABEL_38;
  }
  if ( !(_DWORD)v3 || !Src )
  {
    v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 118;
      LOBYTE(v20) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        118,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    }
    goto LABEL_38;
  }
  memset(v22, 0, sizeof(v22));
  v18 = 16 * v3;
  if ( 16 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v16, v15, v17) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v18] > MmUserProbeAddress || &Src[v18] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v22, Src, 16 * v3);
  if ( !CContentRects::SetContentRects(v3, v22) )
  {
LABEL_38:
    v12 = 87LL;
LABEL_39:
    UserSetLastError(v12, (__int64)v10, v6, v7);
    return v8;
  }
  return 1;
}
