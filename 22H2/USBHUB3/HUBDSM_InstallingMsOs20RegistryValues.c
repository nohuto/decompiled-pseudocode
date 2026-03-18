/*
 * XREFs of HUBDSM_InstallingMsOs20RegistryValues @ 0x1C0024950
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x1C0032B04 (HUBMISC_InstallMsOs20RegistryProperties.c)
 */

__int64 __fastcall HUBDSM_InstallingMsOs20RegistryValues(__int64 a1)
{
  return HUBMISC_InstallMsOs20RegistryProperties(*(_QWORD *)(a1 + 960));
}
