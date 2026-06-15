/*
 * XREFs of sub_180002834 @ 0x180002834
 * Callers:
 *     sub_180037AE8 @ 0x180037AE8 (sub_180037AE8.c)
 *     sub_1800C6710 @ 0x1800C6710 (sub_1800C6710.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 */

__int64 __fastcall sub_180002834(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v7; // rax

  *a3 = 1065353216;
  *a4 = 0LL;
  v7 = sub_180008448(a1, sub_1800B6240);
  return sub_18002D350(a2 + 16, (a2 + 16) & -(__int64)(a2 != 0), *(_QWORD *)(v7 + 8), a3, a4, 0);
}
