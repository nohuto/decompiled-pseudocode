/*
 * XREFs of sub_1800EA2C8 @ 0x1800EA2C8
 * Callers:
 *     sub_1800EA1F4 @ 0x1800EA1F4 (sub_1800EA1F4.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800E99EC @ 0x1800E99EC (sub_1800E99EC.c)
 */

__int64 *__fastcall sub_1800EA2C8(__int64 *a1, __int64 *a2, char *a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10

  v5 = *a1;
  v9 = sub_180008EAC(0x48uLL);
  v10 = *a5;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *((_OWORD *)v9 + 2) = *(_OWORD *)v10;
  *((_OWORD *)v9 + 3) = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_WORD *)v10 = 0;
  *(_QWORD *)(v10 + 24) = 7LL;
  v9[8] = 0LL;
  *v9 = v5;
  v9[1] = v5;
  v9[2] = v5;
  *((_WORD *)v9 + 12) = 0;
  sub_1800E99EC(a1, a2, a3, (char *)v9 + 32, (__int64)v9);
  return a2;
}
