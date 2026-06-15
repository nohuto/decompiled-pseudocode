/*
 * XREFs of sub_180138BF4 @ 0x180138BF4
 * Callers:
 *     sub_180138B20 @ 0x180138B20 (sub_180138B20.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180138398 @ 0x180138398 (sub_180138398.c)
 */

__int64 *__fastcall sub_180138BF4(__int64 *a1, __int64 *a2, char *a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10

  v5 = *a1;
  v9 = sub_180008EAC(0x60uLL);
  v10 = *a5;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *((_OWORD *)v9 + 2) = *(_OWORD *)v10;
  *((_OWORD *)v9 + 3) = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 7LL;
  *(_WORD *)v10 = 0;
  v9[10] = 0LL;
  v9[11] = 7LL;
  *((_WORD *)v9 + 32) = 0;
  *v9 = v5;
  v9[1] = v5;
  v9[2] = v5;
  *((_WORD *)v9 + 12) = 0;
  sub_180138398(a1, a2, a3, (char *)v9 + 32, (__int64)v9);
  return a2;
}
