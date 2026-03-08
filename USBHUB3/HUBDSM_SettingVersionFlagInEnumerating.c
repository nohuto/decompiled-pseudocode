/*
 * XREFs of HUBDSM_SettingVersionFlagInEnumerating @ 0x1C0021470
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetDeviceVersionFlag @ 0x1C00305F8 (HUBMISC_SetDeviceVersionFlag.c)
 */

__int64 __fastcall HUBDSM_SettingVersionFlagInEnumerating(__int64 a1)
{
  HUBMISC_SetDeviceVersionFlag(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
