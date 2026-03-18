/*
 * XREFs of PsIsHostSilo @ 0x1402A6DF0
 * Callers:
 *     PspEstimateNewProcessServerSilo @ 0x14066F8EC (PspEstimateNewProcessServerSilo.c)
 *     PspMapSiloSharedDataView @ 0x140672A98 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140672AD0 (MmMapApiSetView.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140712BA0 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PopGetSettingNotificationName @ 0x140751120 (PopGetSettingNotificationName.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14082C49C (ObpCreateDosDevicesDirectory.c)
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1409C5A90 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC028 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1409F8250 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
