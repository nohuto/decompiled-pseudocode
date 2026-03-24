/*
 * XREFs of EtwTracePowerOnMonitorEnd @ 0x1C0078F80
 * Callers:
 *     PowerOnMonitor @ 0x1C0078C80 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01189B4 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C0125340 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePowerOnMonitorEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PowerOnMonitorEnd, a3, (unsigned int)a1);
  return result;
}
