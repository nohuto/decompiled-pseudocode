void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063310);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v2,
      9,
      38,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
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
      off_1C0063180);
}
