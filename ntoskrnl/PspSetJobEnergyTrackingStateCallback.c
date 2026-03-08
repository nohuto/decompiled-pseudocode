/*
 * XREFs of PspSetJobEnergyTrackingStateCallback @ 0x1407F9320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetJobEnergyTrackingStateCallback(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 1792) = *a2;
  return 0LL;
}
