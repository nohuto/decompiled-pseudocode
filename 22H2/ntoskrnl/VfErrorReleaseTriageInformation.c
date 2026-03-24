/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x1409D8008
 * Callers:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
