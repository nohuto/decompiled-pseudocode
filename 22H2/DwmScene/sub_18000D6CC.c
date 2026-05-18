/*
 * XREFs of sub_18000D6CC @ 0x18000D6CC
 * Callers:
 *     sub_18000D1A4 @ 0x18000D1A4 (sub_18000D1A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D6CC(int a1)
{
  dword_180218430 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180218434);
}
