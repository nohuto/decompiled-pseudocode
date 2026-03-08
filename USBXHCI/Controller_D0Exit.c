/*
 * XREFs of Controller_D0Exit @ 0x1C000EE10
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Register_ControllerStop @ 0x1C000EEB0 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0030E00 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Controller_D0Exit(_QWORD *a1, char a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // edx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    a1[45],
    a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_qL(a1[9], v5, 4, 123, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, (char)a1, a2);
  }
  result = Register_ControllerStop(a1[11]);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(a1[9], v7, 4, 124, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, result);
  }
  return result;
}
