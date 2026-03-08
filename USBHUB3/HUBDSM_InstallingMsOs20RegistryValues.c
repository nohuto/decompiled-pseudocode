/*
 * XREFs of HUBDSM_InstallingMsOs20RegistryValues @ 0x1C0024A60
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x1C0032C14 (HUBMISC_InstallMsOs20RegistryProperties.c)
 */

__int64 __fastcall HUBDSM_InstallingMsOs20RegistryValues(__int64 a1)
{
  return HUBMISC_InstallMsOs20RegistryProperties(*(_QWORD *)(a1 + 960));
}
