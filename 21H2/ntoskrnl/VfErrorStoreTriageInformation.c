/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140A92C94
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 *     ViWdIrpTimedOut @ 0x140A9D340 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AA1C3C (ViCtxCheckAndReleaseIsrState.c)
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
    qword_140D58B68 = a2;
    qword_140D58B70 = a3;
    qword_140D58B78 = a4;
    qword_140D58B80 = a5;
  }
  return v5;
}
