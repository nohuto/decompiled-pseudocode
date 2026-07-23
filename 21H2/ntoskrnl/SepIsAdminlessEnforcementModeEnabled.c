/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x140285D68
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x140285D40 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091CECC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     Feature_SModeAdminless__private_ReportDeviceUsage @ 0x1403F8F48 (Feature_SModeAdminless__private_ReportDeviceUsage.c)
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
