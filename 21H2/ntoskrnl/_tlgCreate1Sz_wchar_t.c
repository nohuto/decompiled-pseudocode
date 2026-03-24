/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140263EF0
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037AD2C (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038A424 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038A5B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A888 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038AA74 (PopTraceThermalRequestActiveActivity.c)
 *     ExLogTimeZoneInformation @ 0x1403B4A9C (ExLogTimeZoneInformation.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573AD0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573BFC (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062A95C (EtwpWriteAppStateChangeSummary.c)
 *     PopLogPowerRequestAction @ 0x14062B588 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x14062B670 (EtwpWriteProcessStarted.c)
 *     CmpLogHiveFileInaccessible @ 0x1406772F4 (CmpLogHiveFileInaccessible.c)
 *     PnpTraceDeviceConfig @ 0x14073AB24 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407A9F38 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0A40 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x140899A4C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140899D5C (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x1408B1BF8 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408E9F00 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F641C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F9B78 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408F9E9C (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x140901BB4 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x140901FCC (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094B900 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const size_t *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_WORD *)a2 + v2) );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &cchOriginalDestLength;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
