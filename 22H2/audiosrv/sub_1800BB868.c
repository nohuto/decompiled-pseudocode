/*
 * XREFs of sub_1800BB868 @ 0x1800BB868
 * Callers:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     sub_1800E6350 @ 0x1800E6350 (sub_1800E6350.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 *     sub_18011BD94 @ 0x18011BD94 (sub_18011BD94.c)
 *     sub_18011CA64 @ 0x18011CA64 (sub_18011CA64.c)
 *     sub_18011EEEC @ 0x18011EEEC (sub_18011EEEC.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BC778 @ 0x1800BC778 (sub_1800BC778.c)
 */

__int64 __fastcall sub_1800BB868(__int64 a1, char a2, SIZE_T a3, void **a4)
{
  LPVOID v6; // rax
  size_t v7; // rax

  v6 = CoTaskMemAlloc(a3);
  *a4 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    v7 = sub_1800BC778(v6);
    memset(*a4, 0, v7);
  }
  return 0LL;
}
