/*
 * XREFs of sub_180020498 @ 0x180020498
 * Callers:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 * Callees:
 *     sub_18004DA00 @ 0x18004DA00 (sub_18004DA00.c)
 */

__int64 __fastcall sub_180020498(__int64 a1)
{
  sub_18004DA00();
  *(_QWORD *)a1 = &off_1801480F0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
