/*
 * XREFs of GetThreadpMenuState @ 0x1C01B695C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadpMenuState(__int64 a1)
{
  return *(_QWORD *)(a1 + 608);
}
