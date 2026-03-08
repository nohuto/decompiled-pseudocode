/*
 * XREFs of HUBDSM_SettingDevicePDChargingPolicy @ 0x1C00209F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002D7DC (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingDevicePDChargingPolicy(__int64 a1)
{
  HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
