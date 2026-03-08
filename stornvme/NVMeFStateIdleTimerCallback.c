/*
 * XREFs of NVMeFStateIdleTimerCallback @ 0x1C000EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFStateIdleTimerCallback(__int64 a1)
{
  *(_DWORD *)(a1 + 1880) &= ~0x20u;
  return StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
}
