/*
 * XREFs of sub_1800CBFB0 @ 0x1800CBFB0
 * Callers:
 *     sub_1800CC828 @ 0x1800CC828 (sub_1800CC828.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_1800CC1BC @ 0x1800CC1BC (sub_1800CC1BC.c)
 *     sub_1800CCDA4 @ 0x1800CCDA4 (sub_1800CCDA4.c)
 */

__int64 __fastcall sub_1800CBFB0(__int64 *a1, char *a2, char *a3)
{
  __int64 *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 v11; // r9
  char *v12; // rbp
  __int64 v13; // rsi
  char *v14; // rdi
  __int64 *v15; // rsi
  _DWORD *v16; // rdi
  int v17; // eax
  __int64 *i; // rbx

  v6 = (__int64 *)a1[1];
  v7 = *a1;
  v8 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v9 = (v8 >> 63) + v8;
  result = 0x2AAAAAAAAAAAAAABLL * ((_QWORD)v6 - *a1);
  v11 = ((__int64)v6 - *a1) / 48;
  if ( v9 <= v11 )
  {
    v15 = (__int64 *)(v7 + 48 * v9);
    if ( a2 != a3 )
    {
      v16 = a2 + 36;
      do
      {
        sub_180012E34((__int64 *)v7, (__int64 *)(v16 - 9));
        *(_DWORD *)(v7 + 32) = *(v16 - 1);
        v17 = *v16;
        v16 += 12;
        *(_DWORD *)(v7 + 36) = v17;
        *(_BYTE *)(v7 + 40) = *((_BYTE *)v16 - 44);
        *(_DWORD *)(v7 + 44) = *(v16 - 10);
        result = (__int64)(v16 - 9);
        v7 += 48LL;
      }
      while ( v16 - 9 != (_DWORD *)a3 );
      v6 = (__int64 *)a1[1];
    }
    for ( i = v15; i != v6; i += 6 )
      result = (__int64)sub_180065AF4(i, 0);
  }
  else
  {
    if ( v9 > (a1[2] - v7) / 48 )
    {
      sub_1800CCDA4(a1, v9);
      v7 = *a1;
      v11 = 0LL;
    }
    v12 = &a2[48 * v11];
    if ( a2 != v12 )
    {
      v13 = v7 + 36;
      v14 = &a2[-v7];
      do
      {
        sub_180012E34((__int64 *)(v13 - 36), (__int64 *)&v14[v13 - 36]);
        *(_DWORD *)(v13 - 4) = *(_DWORD *)&v14[v13 - 4];
        *(_DWORD *)v13 = *(_DWORD *)&v14[v13];
        *(_BYTE *)(v13 + 4) = v14[v13 + 4];
        *(_DWORD *)(v13 + 8) = *(_DWORD *)&v14[v13 + 8];
        v13 += 48LL;
      }
      while ( &v14[v13 - 36] != v12 );
    }
    result = sub_1800CC1BC(v12, a3, a1[1], a1);
    v15 = (__int64 *)result;
  }
  a1[1] = (__int64)v15;
  return result;
}
