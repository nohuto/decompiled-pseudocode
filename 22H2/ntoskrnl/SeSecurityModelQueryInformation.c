/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14091CDBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x140252758 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1402E6BA0 (SepIsSModeEnabled.c)
 *     memset @ 0x140413800 (memset.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x140596BB4 (SepIsAdminlessAuditModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140596BC8 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
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
