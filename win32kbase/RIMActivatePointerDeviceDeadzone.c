/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C01AA570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Activate@RIMDeadzone@@QEAAJH@Z @ 0x1C01C8C54 (-Activate@RIMDeadzone@@QEAAJH@Z.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C01C8CB8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  RIMDeadzone *v6; // rcx
  unsigned int v7; // eax
  RIMDeadzone *v8; // rcx
  unsigned int v9; // ebx

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      36,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v9 = -1073741811;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        37,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else if ( v4 < 5 && (v6 = *(RIMDeadzone **)(a1 + 8LL * v4 + 408)) != 0LL )
  {
    v7 = RIMDeadzone::Activate(v6, v3);
    v8 = *(RIMDeadzone **)(a1 + 8LL * v4 + 408);
    v9 = v7;
    RIMDeadzone::ActivateTelemetrySession(v8, v3);
  }
  else
  {
    v9 = -1073741811;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      38,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v9);
  }
  return v9;
}
