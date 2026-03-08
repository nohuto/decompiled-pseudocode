/*
 * XREFs of _tlgKeywordOn @ 0x1C004BCD4
 * Callers:
 *     Etw_DeviceUpdate @ 0x1C001D724 (Etw_DeviceUpdate.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C001F980 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00533E4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
