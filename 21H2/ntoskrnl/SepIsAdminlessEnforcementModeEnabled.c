/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x140252EF8
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x140252ED0 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091CD6C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     Feature_SModeAdminless__private_ReportDeviceUsage @ 0x1403F8F18 (Feature_SModeAdminless__private_ReportDeviceUsage.c)
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
