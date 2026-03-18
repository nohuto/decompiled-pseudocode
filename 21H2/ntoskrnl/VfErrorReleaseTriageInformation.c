/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140A92B64
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
