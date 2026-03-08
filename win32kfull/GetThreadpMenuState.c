/*
 * XREFs of GetThreadpMenuState @ 0x1C01B7AFC
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadpMenuState(__int64 a1)
{
  return *(_QWORD *)(a1 + 608);
}
