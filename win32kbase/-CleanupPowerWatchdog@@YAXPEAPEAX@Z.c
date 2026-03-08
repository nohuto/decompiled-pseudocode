/*
 * XREFs of ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C00B3A74
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00B39B0 (CleanupPowerRequestList.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall CleanupPowerWatchdog(void **a1)
{
  __int64 v1; // rdi
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-68h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[11]) = 1;
    InputBuffer[1] = v1;
    *a1 = 0LL;
    if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 607LL);
  }
}
