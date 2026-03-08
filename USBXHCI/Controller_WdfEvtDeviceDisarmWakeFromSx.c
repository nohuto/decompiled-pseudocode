/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0036A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  _UNKNOWN **result; // rax

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *(_QWORD *)(v3 + 72),
                            v2,
                            4,
                            92,
                            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                            v1);
  }
  *(_BYTE *)(v3 + 468) = 0;
  return result;
}
