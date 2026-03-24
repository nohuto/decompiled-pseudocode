/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1C003BEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0016398 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060310);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v2,
      9,
      37,
      (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
      a1,
      v3);
  }
  v4 = *(struct _PCW_INSTANCE **)(v3 + 88);
  if ( v4 )
    PcwCloseInstance(v4);
  if ( !*(_DWORD *)(v3 + 32) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a1,
      off_1C0060180);
}
