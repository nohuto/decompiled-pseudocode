/*
 * XREFs of PsIsHostSilo @ 0x14030F2E0
 * Callers:
 *     PopTransitionCheckpoint @ 0x14067F1CC (PopTransitionCheckpoint.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406BF9CC (EtwpWriteAppStateChangeSummary.c)
 *     SeCreateClientSecurityEx @ 0x1406D5D70 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     PspMapSiloSharedDataView @ 0x14070783C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140707874 (MmMapApiSetView.c)
 *     PspEstimateNewProcessServerSilo @ 0x14070D590 (PspEstimateNewProcessServerSilo.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     PsRegisterSiloMonitor @ 0x14080C7C0 (PsRegisterSiloMonitor.c)
 *     ExInitLicenseData @ 0x140819CE8 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14085264C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x1409B0A80 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC168 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1409F53B0 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
