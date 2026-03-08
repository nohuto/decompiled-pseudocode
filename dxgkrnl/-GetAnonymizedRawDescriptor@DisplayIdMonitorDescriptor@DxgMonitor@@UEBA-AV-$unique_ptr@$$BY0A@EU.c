/*
 * XREFs of ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C03CBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0072224 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C00723F4 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     ?GetRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C03CC080 (-GetRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_.c)
 */

_QWORD *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetAnonymizedRawDescriptor(__int64 a1, _QWORD *a2, int *a3)
{
  int v5; // r8d
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  DxgMonitor::DisplayIdMonitorDescriptor::GetRawDescriptor(a1, &v10);
  v5 = *a3;
  v6 = v10;
  if ( *a3
    && (v9 = 0LL,
        v8 = 0LL,
        DisplayID_Initialize((struct DisplayIDObj *)&v8, (unsigned __int8 *)v10, v5),
        (int)DisplayID_UpdateForTelemetry((struct DisplayIDObj *)&v8) < 0) )
  {
    *a3 = 0;
    *a2 = 0LL;
    if ( v6 )
      operator delete(v6);
  }
  else
  {
    *a2 = v6;
  }
  return a2;
}
