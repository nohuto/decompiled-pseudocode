/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x140252ED0
 * Callers:
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x140922890 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x140252EF8 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x14028FE30 (SepIsSModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || (unsigned __int8)SepIsSModeEnabled() != 1 )
    return 0;
  return v0;
}
