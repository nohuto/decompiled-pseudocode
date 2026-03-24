/*
 * XREFs of ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C017F4A4
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C017F544 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  DXGMONITOR *v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  *(_DWORD *)a2 = 0;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
    return 3221225635LL;
  v4 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &Handle);
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdTrace(v6, v5);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = v7;
  }
  else if ( g_OSTestSigningEnabled )
  {
    LODWORD(v7) = DXGMONITOR::_ReadUsageOverridesFromRegistry(v6, Handle, a2);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
