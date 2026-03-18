/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140AD4684
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140AD4724 (ViErrorFinishReport.c)
 *     ViWdIrpTimedOut @ 0x140ADF3EC (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE5B58 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5)
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
    qword_140D71998 = a2;
    qword_140D719A0 = a3;
    qword_140D719A8 = a4;
    qword_140D719B0 = a5;
  }
  return v5;
}
