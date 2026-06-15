/*
 * XREFs of sub_1801131E0 @ 0x1801131E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011125C @ 0x18011125C (sub_18011125C.c)
 */

__int64 __fastcall sub_1801131E0(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rdi
  __int64 v5; // rax
  _OWORD *v6; // rbx
  __int128 v7; // xmm1

  v4 = (_OWORD *)a3;
  sub_18011125C((__int64 *)(a1 + 16), a2, a3);
  v5 = 2LL;
  v6 = (_OWORD *)(a1 + 64);
  do
  {
    *v6 = *v4;
    v6[1] = v4[1];
    v6[2] = v4[2];
    v6[3] = v4[3];
    v6[4] = v4[4];
    v6[5] = v4[5];
    v6[6] = v4[6];
    v6 += 8;
    v7 = v4[7];
    v4 += 8;
    *(v6 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *v6 = *v4;
  *((_DWORD *)v6 + 4) = *((_DWORD *)v4 + 4);
  return 0LL;
}
