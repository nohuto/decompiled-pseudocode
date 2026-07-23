/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402709CC
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037A87C (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038A574 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038A704 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A9D8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038ABC4 (PopTraceThermalRequestActiveActivity.c)
 *     ExLogTimeZoneInformation @ 0x1403B4C0C (ExLogTimeZoneInformation.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573D10 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573E3C (PopTraceZoneCr3Tripped.c)
 *     CmpLogHiveFileInaccessible @ 0x14066A9C4 (CmpLogHiveFileInaccessible.c)
 *     PopLogPowerRequestAction @ 0x14066FB30 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x14066FC18 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406A42DC (EtwpWriteAppStateChangeSummary.c)
 *     PnpTraceDeviceConfig @ 0x14073ACE4 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407AA138 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0BB0 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x140899BAC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140899EBC (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x1408B1D58 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408EA060 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F657C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F9CD8 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408F9FFC (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x140901D14 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x14090212C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094BAD0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
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
