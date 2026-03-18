/*
 * XREFs of rimDereferenceDev @ 0x1C00A12A0
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00A0F40 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  void *v6; // rsi
  void *v7; // rbp
  int v8; // eax
  int v9; // edx
  int v10; // r8d

  v4 = *(_QWORD **)(a1 + 32);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(void **)(a1 + 16);
  v7 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v8 = *(_DWORD *)(a1 + 184);
  if ( (v8 & 0x20) == 0 && (v8 & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 188) & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  if ( v4[4] == PsGetCurrentProcess(a1, a2, a3, a4) )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
        (char)v6,
        a1);
    }
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  return ObfDereferenceObject(v4);
}
