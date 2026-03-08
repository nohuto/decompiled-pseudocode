/*
 * XREFs of HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x1C0020920
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x1C0031064 (HUBMISC_CheckIfDeviceProgrammingWasLost.c)
 */

__int64 __fastcall HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum(__int64 a1)
{
  return HUBMISC_CheckIfDeviceProgrammingWasLost(*(_QWORD *)(a1 + 960));
}
