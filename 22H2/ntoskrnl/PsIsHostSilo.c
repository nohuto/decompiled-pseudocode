/*
 * XREFs of PsIsHostSilo @ 0x1402D5230
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1402F3000 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403944F0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B2410 (ExpNextYearDpcRoutine.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D7A8 (PspEstimateNewProcessServerSilo.c)
 *     PspMapSiloSharedDataView @ 0x1406120C8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140612100 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062AD7C (EtwpWriteAppStateChangeSummary.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140650820 (IopAllocRealFileObject.c)
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x1407905D0 (PsRegisterSiloMonitor.c)
 *     EtwInitializeSiloState @ 0x140795A88 (EtwInitializeSiloState.c)
 *     ObpInitializeRootNamespace @ 0x1407A0DC0 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A1228 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x1407AB138 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x1407AD670 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C9000 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x14090AF34 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14091C124 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409226B8 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x14094BC60 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
