/*
 * XREFs of sub_180112180 @ 0x180112180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 */

__int64 __fastcall sub_180112180(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  if ( !sub_180111BF0((_QWORD *)(a1 + 16), a2) )
    return 2147942487LL;
  v5 = 2LL;
  v6 = (_OWORD *)(a1 + 64);
  do
  {
    *a3 = *v6;
    a3[1] = v6[1];
    a3[2] = v6[2];
    a3[3] = v6[3];
    a3[4] = v6[4];
    a3[5] = v6[5];
    a3[6] = v6[6];
    a3 += 8;
    v7 = v6[7];
    v6 += 8;
    *(a3 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *a3 = *v6;
  *((_DWORD *)a3 + 4) = *((_DWORD *)v6 + 4);
  return 0LL;
}
