/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x140252758
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x140252730 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091CDBC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     Feature_SModeAdminless__private_ReportDeviceUsage @ 0x1403F8598 (Feature_SModeAdminless__private_ReportDeviceUsage.c)
 */

char SepIsAdminlessEnforcementModeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( SeAdminlessEnforcementModeEnabled )
    return 1;
  Feature_SModeAdminless__private_ReportDeviceUsage();
  return v0;
}
