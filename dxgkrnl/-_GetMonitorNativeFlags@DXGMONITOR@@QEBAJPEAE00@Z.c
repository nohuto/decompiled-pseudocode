/*
 * XREFs of ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C01B03D0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     MonitorGetNativeFlags @ 0x1C01D7E10 (MonitorGetNativeFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMonitorNativeFlags(DXGMONITOR *this, unsigned __int8 *a2, bool *a3, bool *a4)
{
  char v8; // al
  bool v9; // cl
  __int64 v10; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  v8 = *((_BYTE *)this + 177);
  v9 = (v8 & 2) != 0;
  *a2 = v8 & 1;
  v10 = *((_QWORD *)this + 27);
  *a3 = v9;
  *a4 = *(_QWORD *)(v10 + 160) == 0LL;
  return 0LL;
}
