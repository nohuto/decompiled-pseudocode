/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C015A250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?Activate@RIMDeadzone@@QEAAJH@Z @ 0x1C016DE98 (-Activate@RIMDeadzone@@QEAAJH@Z.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C016DEFC (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  RIMDeadzone *v6; // rcx
  unsigned int v7; // eax
  RIMDeadzone *v8; // rcx
  unsigned int v9; // ebx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 36, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 37, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  else if ( v4 < 5 && (v6 = *(RIMDeadzone **)(a1 + 8LL * v4 + 416)) != 0LL )
  {
    v7 = RIMDeadzone::Activate(v6, a3);
    v8 = *(RIMDeadzone **)(a1 + 8LL * v4 + 416);
    v9 = v7;
    RIMDeadzone::ActivateTelemetrySession(v8, a3);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v9);
  }
  return v9;
}
