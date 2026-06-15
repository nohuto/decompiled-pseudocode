/*
 * XREFs of sub_1800CD924 @ 0x1800CD924
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 */

__int64 __fastcall sub_1800CD924(__int64 a1)
{
  sub_18002BE50(a1);
  *(_QWORD *)a1 = off_180155048;
  *(_QWORD *)(a1 + 8) = off_180155028;
  *(_QWORD *)(a1 + 16) = off_180154FF8;
  *(_QWORD *)(a1 + 24) = off_180154FC8;
  *(_QWORD *)(a1 + 32) = off_180154FA0;
  *(_QWORD *)(a1 + 984) = off_180154F80;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 992), 0, 0);
  *(_QWORD *)(a1 + 1032) = 0LL;
  return a1;
}
