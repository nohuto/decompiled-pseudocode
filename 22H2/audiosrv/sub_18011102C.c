/*
 * XREFs of sub_18011102C @ 0x18011102C
 * Callers:
 *     sub_1801110C0 @ 0x1801110C0 (sub_1801110C0.c)
 *     sub_180111110 @ 0x180111110 (sub_180111110.c)
 *     sub_1801111A0 @ 0x1801111A0 (sub_1801111A0.c)
 *     sub_1801111E0 @ 0x1801111E0 (sub_1801111E0.c)
 * Callees:
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 */

void __fastcall sub_18011102C(__int64 a1)
{
  *(_QWORD *)a1 = &off_180155B68;
  sub_1800D12E4((_QWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
