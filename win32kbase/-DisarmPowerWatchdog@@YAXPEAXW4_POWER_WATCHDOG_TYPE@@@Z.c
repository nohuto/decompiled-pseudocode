/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00D2C40
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C0167BB8 (McTemplateK0x_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DisarmPowerWatchdog(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      return McTemplateK0x_EtwWriteTransfer(v3, &StopPowerWatchdog, v4, a1);
  }
  return result;
}
