/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1C002D324
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0041B30 (StorPortUnitIdleState.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5088) != 0LL;
}
