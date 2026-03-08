/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C0032380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     XilCoreCommonBuffer_Cleanup @ 0x1C0052CE4 (XilCoreCommonBuffer_Cleanup.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  char v1; // di
  int v2; // edx
  _QWORD *v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v1 = a1;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0063298);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(*v3 + 72LL), v2, 8, 13, (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids, v1);
  }
  v4 = (struct _PCW_INSTANCE *)v3[2];
  if ( v4 )
    PcwCloseInstance(v4);
  return XilCoreCommonBuffer_Cleanup(v3 + 11);
}
