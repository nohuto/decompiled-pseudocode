/*
 * XREFs of RtlIsCurrentThread @ 0x1800FF260
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x18009E830 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects() >= 0;
}
