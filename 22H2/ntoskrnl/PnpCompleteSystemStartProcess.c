/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403C3078
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036F9F0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14037BE48 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x140771794 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x1407882D0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1407BD420 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1407BD504 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407BD59C (PiInitReleaseCachedGroupInformation.c)
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
