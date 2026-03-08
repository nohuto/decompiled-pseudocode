/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140244050
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402BB8E4 (PopDiagTraceIrpFinishTelemetry.c)
 *     ExLogTimeZoneInformation @ 0x1403AB740 (ExLogTimeZoneInformation.c)
 *     CcPostVolumeTelemetry @ 0x1403CB4D0 (CcPostVolumeTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140590058 (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14059334C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14059356C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405938C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140593A94 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140593C1C (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140593D44 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x1405D03FC (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x1405D05C8 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D078C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D0A70 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1405D0EB4 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x1405D10B0 (CarTipLogDriverLoad.c)
 *     VhdiAutoAttachOneVhd @ 0x14067E088 (VhdiAutoAttachOneVhd.c)
 *     PfSnLogScenarioDecision @ 0x1406BE5DC (PfSnLogScenarioDecision.c)
 *     EtwpWriteProcessStarted @ 0x1406BF738 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406BF9CC (EtwpWriteAppStateChangeSummary.c)
 *     IoGetEnvironmentVariableEx @ 0x14075D3B0 (IoGetEnvironmentVariableEx.c)
 *     CmpLogHiveFileInaccessible @ 0x14078B330 (CmpLogHiveFileInaccessible.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1408120DC (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopSqmThermalZoneEnumeration @ 0x140846D78 (PopSqmThermalZoneEnumeration.c)
 *     PopThermalHandlePreviousShutdown @ 0x14085C2A8 (PopThermalHandlePreviousShutdown.c)
 *     PnpTraceDeviceConfig @ 0x1408773C8 (PnpTraceDeviceConfig.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x140968DF4 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14098B938 (PopDiagTraceDozeDeferralDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x14098DD00 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x14099DA40 (PopPotsLogPowerTransitionReliability.c)
 *     PopSqmThermalCriticalEvent @ 0x14099DC68 (PopSqmThermalCriticalEvent.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A445C (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A4874 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F4E90 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B32DDC (PopPotsLogDirtyPowerTransition.c)
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
