/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x1406E9510
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x140209380 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
