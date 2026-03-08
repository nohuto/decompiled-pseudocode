/*
 * XREFs of ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C0212560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C00225C8 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01CFB00 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

unsigned __int8 **__fastcall DxgMonitor::EdidMonitorDescriptor::GetAnonymizedRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *a1,
        unsigned __int8 **a2,
        unsigned int *a3)
{
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rdx
  unsigned __int8 *v8; // [rsp+40h] [rbp+18h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(a1, &v8, a3);
  v5 = v8;
  if ( *a3 && (v6 = v8, *a3 = 128, (int)EDID_V1_RemovePII(0x80u, v6) < 0) )
  {
    *a3 = 0;
    *a2 = 0LL;
    if ( v5 )
      operator delete(v5);
  }
  else
  {
    *a2 = v5;
  }
  return a2;
}
