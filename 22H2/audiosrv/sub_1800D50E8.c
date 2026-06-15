/*
 * XREFs of sub_1800D50E8 @ 0x1800D50E8
 * Callers:
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 * Callees:
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_1800D5D94 @ 0x1800D5D94 (sub_1800D5D94.c)
 */

__int64 __fastcall sub_1800D50E8(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 76) || a1 + 8 != a2 )
  {
    *(_DWORD *)(a1 + 80) = 7;
    sub_18002C26C((_QWORD *)(a1 + 88));
    sub_18002C26C((_QWORD *)(a1 + 96));
    sub_18002C26C((_QWORD *)(a1 + 104));
    sub_18002C26C((_QWORD *)(a1 + 112));
    *(_BYTE *)(a1 + 76) = 0;
    sub_1800D5D94(a1, a2);
    *(_DWORD *)(a1 + 80) = 8;
  }
  return a1;
}
