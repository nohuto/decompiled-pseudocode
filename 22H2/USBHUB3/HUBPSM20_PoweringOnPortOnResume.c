/*
 * XREFs of HUBPSM20_PoweringOnPortOnResume @ 0x1C00124D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C00049BC (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_PoweringOnPortOnResume(__int64 a1)
{
  HUBHTX_SettingPortPowerUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
