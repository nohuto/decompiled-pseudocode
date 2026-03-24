/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140596C74
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CD6C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
