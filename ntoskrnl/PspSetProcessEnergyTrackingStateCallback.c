/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x14079B910
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x140294B40 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
