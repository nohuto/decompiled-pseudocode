/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C00796C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C001E9A8 (XilCommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0034540 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0079270 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rdx

  v1 = a1;
  v3 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00633D8)
                   + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(v3[9], v2, 4, 61, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v1);
  }
  v4 = (void *)v3[74];
  if ( v4 )
  {
    PoUnregisterPowerSettingCallback(v4);
    v3[74] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v3);
  v5 = v3[57];
  if ( v5 )
  {
    XilCommonBuffer_ReleaseBuffer(v3[15], v5);
    v3[57] = 0LL;
  }
  Controller_UpdateSqmDatapoints(v3);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v3[1]);
}
