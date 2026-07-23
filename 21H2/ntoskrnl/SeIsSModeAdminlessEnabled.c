/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x140285D40
 * Callers:
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x1409229F0 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x14020DDA0 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x140285D68 (SepIsAdminlessEnforcementModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || !SepIsSModeEnabled() )
    return 0;
  return v0;
}
