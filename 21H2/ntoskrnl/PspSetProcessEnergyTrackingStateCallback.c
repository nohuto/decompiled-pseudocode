/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x140620C40
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x1402F67A0 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
