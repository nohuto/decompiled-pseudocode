/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1409D91BC
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DB420 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x1409E1F60 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409E5344 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140D4B668 = a2;
    qword_140D4B670 = a3;
    qword_140D4B678 = a4;
    qword_140D4B680 = a5;
  }
  return v5;
}
