/*
 * XREFs of sub_180051DF0 @ 0x180051DF0
 * Callers:
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180051DF0(__int64 a1, const WCHAR *a2)
{
  return CompareStringW(0x7Fu, 1u, a2, -1, *(PCNZWCH *)(a1 + 24), -1) == 2;
}
