/*
 * XREFs of sub_1800EF44C @ 0x1800EF44C
 * Callers:
 *     sub_1800EF878 @ 0x1800EF878 (sub_1800EF878.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800EEE5C @ 0x1800EEE5C (sub_1800EEE5C.c)
 */

__int64 *__fastcall sub_1800EF44C(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax

  v5 = *a1;
  v9 = sub_180008EAC(0x30uLL);
  *((_DWORD *)v9 + 7) = **a5;
  *(_QWORD *)((char *)v9 + 36) = 0LL;
  v9[4] = 0LL;
  *((_DWORD *)v9 + 10) = 0;
  *v9 = v5;
  v9[1] = v5;
  v9[2] = v5;
  *((_WORD *)v9 + 12) = 0;
  sub_1800EEE5C(a1, a2, a3, (unsigned int *)v9 + 7, (__int64)v9);
  return a2;
}
