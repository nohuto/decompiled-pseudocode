/*
 * XREFs of ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03CB8C0
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C01FEB78 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FF6CC (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03CBBD0 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0072224 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  void *v6; // rcx
  unsigned __int8 *v7; // rdx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  v4 = *a2;
  *a2 = 0LL;
  v6 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v6 )
    operator delete(v6);
  v7 = *(unsigned __int8 **)(a1 + 16);
  *(_DWORD *)(a1 + 8) = a3;
  DisplayID_Initialize((struct DisplayIDObj *)(a1 + 24), v7, a3);
  return a1;
}
