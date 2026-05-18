/*
 * XREFs of sub_18010B4EC @ 0x18010B4EC
 * Callers:
 *     sub_18012A3F3 @ 0x18012A3F3 (sub_18012A3F3.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 */

__int64 __fastcall sub_18010B4EC(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_180065AF4((__int64 *)(a2 + 16), 0);
  return j_j__o_free(a2);
}
