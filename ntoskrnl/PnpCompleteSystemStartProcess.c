/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x14039C088
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1402B1760 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x140780438 (IopCallDriverReinitializationRoutines.c)
 *     PpReleaseBootDDB @ 0x140842884 (PpReleaseBootDDB.c)
 *     EtwWriteEndScenario @ 0x140842920 (EtwWriteEndScenario.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1408429D8 (PiInitReleaseCachedGroupInformation.c)
 *     KseShimDatabaseBootRelease @ 0x140842A14 (KseShimDatabaseBootRelease.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
