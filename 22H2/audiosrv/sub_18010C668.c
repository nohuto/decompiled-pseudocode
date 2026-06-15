/*
 * XREFs of sub_18010C668 @ 0x18010C668
 * Callers:
 *     sub_18010C578 @ 0x18010C578 (sub_18010C578.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_18010C07C @ 0x18010C07C (sub_18010C07C.c)
 */

__int64 *__fastcall sub_18010C668(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, _OWORD **a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax

  v5 = *a1;
  v9 = sub_180008EAC(0x48uLL);
  *((_OWORD *)v9 + 2) = **a5;
  v9[7] = 0LL;
  v9[8] = 0LL;
  v9[6] = 0LL;
  *v9 = v5;
  v9[1] = v5;
  v9[2] = v5;
  *((_WORD *)v9 + 12) = 0;
  sub_18010C07C(a1, a2, a3, (__int128 *)v9 + 2, (__int64)v9);
  return a2;
}
