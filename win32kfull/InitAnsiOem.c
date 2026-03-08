/*
 * XREFs of InitAnsiOem @ 0x1C00F0780
 * Callers:
 *     NtUserInitAnsiOem @ 0x1C00F0730 (NtUserInitAnsiOem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitAnsiOem(_OWORD *a1, _OWORD *a2)
{
  _OWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  _OWORD *v6; // rcx

  v3 = (_OWORD *)(gpsi + 1380LL);
  v4 = 2LL;
  v5 = 2LL;
  do
  {
    *v3 = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[3];
    v3[4] = a1[4];
    v3[5] = a1[5];
    v3[6] = a1[6];
    v3 += 8;
    *(v3 - 1) = a1[7];
    a1 += 8;
    --v5;
  }
  while ( v5 );
  v6 = (_OWORD *)(gpsi + 1636LL);
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    *(v6 - 1) = a2[7];
    a2 += 8;
    --v4;
  }
  while ( v4 );
  return 1LL;
}
