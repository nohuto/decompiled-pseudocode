/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C02CF1B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02CF1D0 (DxgkPollDisplayChildrenInternal.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkPollDisplayChildrenInternal(a1, a2);
}
