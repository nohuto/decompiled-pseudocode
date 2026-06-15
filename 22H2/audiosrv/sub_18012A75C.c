/*
 * XREFs of sub_18012A75C @ 0x18012A75C
 * Callers:
 *     sub_18012A5D4 @ 0x18012A5D4 (sub_18012A5D4.c)
 * Callees:
 *     sub_18012A694 @ 0x18012A694 (sub_18012A694.c)
 */

__int64 __fastcall sub_18012A75C(__int64 a1)
{
  __int64 result; // rax

  sub_18012A694(a1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &off_180156030;
  *(_QWORD *)(a1 + 8) = off_180155FA0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 56), 0, 0);
  *(_QWORD *)(a1 + 536) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 544) = 0;
  return result;
}
