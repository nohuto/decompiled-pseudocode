/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140AD4554
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
