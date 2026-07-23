/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140596EA4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CECC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
