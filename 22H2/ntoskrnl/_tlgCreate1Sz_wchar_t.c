/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402F6BE4
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E474 (PopDiagTraceIrpFinishTelemetry.c)
 *     ExLogTimeZoneInformation @ 0x1403B0490 (ExLogTimeZoneInformation.c)
 *     CcPostVolumeTelemetry @ 0x1403D0A70 (CcPostVolumeTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140592588 (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595868 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595A88 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595DDC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595FB0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596138 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140596260 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x1405D28AC (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x1405D2A78 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D2C3C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D2F20 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1405D3364 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x1405D3560 (CarTipLogDriverLoad.c)
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PfSnLogScenarioDecision @ 0x140752F04 (PfSnLogScenarioDecision.c)
 *     EtwpWriteProcessStarted @ 0x140754060 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1407543B0 (EtwpWriteAppStateChangeSummary.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408026A8 (PopSqmThermalZoneEnumeration.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140841504 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1408601A8 (PopThermalHandlePreviousShutdown.c)
 *     PnpTraceDeviceConfig @ 0x1408793B0 (PnpTraceDeviceConfig.c)
 *     IoSetEnvironmentVariableEx @ 0x140950524 (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x14096BE14 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14098E9E8 (PopDiagTraceDozeDeferralDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990DB0 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0AD0 (PopPotsLogPowerTransitionReliability.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0CF8 (PopSqmThermalCriticalEvent.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A74E4 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A78FC (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7D20 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B36D5C (PopPotsLogDirtyPowerTransition.c)
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
