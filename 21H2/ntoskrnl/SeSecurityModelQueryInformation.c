/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14091CECC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsSModeEnabled @ 0x14020DDA0 (SepIsSModeEnabled.c)
 *     SepIsAdminlessEnforcementModeEnabled @ 0x140285D68 (SepIsAdminlessEnforcementModeEnabled.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x140596EA4 (SepIsAdminlessAuditModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140596EB8 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 */

__int64 __fastcall SeSecurityModelQueryInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  *a3 = 4;
  memset(a1, 0, a2);
  if ( (SepIsAdminlessEnforcementModeEnabled() == 1 || SepIsAdminlessAuditModeEnabled()) && SepIsSModeEnabled() )
    *a1 |= 1u;
  if ( SepIsDeviceOwnerProtectionDowngradeAllowed() )
    *a1 |= 2u;
  return 0LL;
}
