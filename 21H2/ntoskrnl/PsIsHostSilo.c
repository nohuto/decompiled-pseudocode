/*
 * XREFs of PsIsHostSilo @ 0x140354A80
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14035F960 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394BF0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B24D0 (ExpNextYearDpcRoutine.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060D348 (PspEstimateNewProcessServerSilo.c)
 *     PspMapSiloSharedDataView @ 0x140611C68 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062A95C (EtwpWriteAppStateChangeSummary.c)
 *     SeCreateClientSecurityEx @ 0x14065DF60 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
 *     PopTransitionCheckpoint @ 0x140775778 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x140795740 (PsRegisterSiloMonitor.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     ObpInitializeRootNamespace @ 0x1407A0990 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A0DF8 (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x1407AAD08 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x1407AD230 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x1407C90E0 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x14090AEE4 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14091C0D4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x140922668 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x14094BC10 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
