/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x140252730
 * Callers:
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x1409228E0 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x140252758 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1402E6BA0 (SepIsSModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || (unsigned __int8)SepIsSModeEnabled() != 1 )
    return 0;
  return v0;
}
