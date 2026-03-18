/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403A0B38
 * Callers:
 *     PnpDeviceActionWorker @ 0x140358E30 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140362508 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1407CF4D8 (IopCallDriverReinitializationRoutines.c)
 *     PpReleaseBootDDB @ 0x1408456C4 (PpReleaseBootDDB.c)
 *     EtwWriteEndScenario @ 0x140845760 (EtwWriteEndScenario.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140845818 (PiInitReleaseCachedGroupInformation.c)
 *     KseShimDatabaseBootRelease @ 0x140845854 (KseShimDatabaseBootRelease.c)
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
