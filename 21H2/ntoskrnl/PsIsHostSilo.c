/*
 * XREFs of PsIsHostSilo @ 0x14035F7D0
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1402A4890 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394D40 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B2700 (ExpNextYearDpcRoutine.c)
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14069CDF8 (PspEstimateNewProcessServerSilo.c)
 *     PspMapSiloSharedDataView @ 0x1406A1718 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406A42DC (EtwpWriteAppStateChangeSummary.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     PopTransitionCheckpoint @ 0x140775938 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x140795940 (PsRegisterSiloMonitor.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     ObpInitializeRootNamespace @ 0x1407A0B90 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A0FF8 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x1407AAF08 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x14090B044 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409227C8 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x14094BDE0 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
