/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140596BB4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CDBC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
