/*
 * XREFs of HUBHSM_SettingHubConfiguration @ 0x1C00099C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_SetHubConfiguration @ 0x1C00073A8 (HUBPARENT_SetHubConfiguration.c)
 */

__int64 __fastcall HUBHSM_SettingHubConfiguration(__int64 a1)
{
  HUBPARENT_SetHubConfiguration(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
