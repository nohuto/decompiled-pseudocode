/*
 * XREFs of IsImmersiveBand @ 0x1C0039C00
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall IsImmersiveBand(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)IsNonImmersiveBand(a1, a2, a3) == 0;
}
