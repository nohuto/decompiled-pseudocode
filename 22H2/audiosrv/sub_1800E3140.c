/*
 * XREFs of sub_1800E3140 @ 0x1800E3140
 * Callers:
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800E3140(_QWORD *a1, _WORD **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx

  v4 = (__int64 *)sub_180055F40(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = (__int64)off_1801552E0;
    sub_180060060(v4 + 2, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 2;
  a1[1] = v5;
  return a1;
}
