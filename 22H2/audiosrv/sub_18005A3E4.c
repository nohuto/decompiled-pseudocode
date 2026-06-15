/*
 * XREFs of sub_18005A3E4 @ 0x18005A3E4
 * Callers:
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005A3E4(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // edx
  __int128 v6; // xmm0
  int v7; // eax

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 2 )
        return (unsigned int)-2147023728;
      *(_OWORD *)a3 = xmmword_180172CB8;
      v6 = xmmword_180172B98;
      *(_DWORD *)(a3 + 16) = 9;
      v7 = 17;
    }
    else
    {
      *(_OWORD *)a3 = xmmword_180160BD0;
      v6 = xmmword_180160BB8;
      *(_DWORD *)(a3 + 16) = 12;
      v7 = 20;
    }
    *(_OWORD *)a4 = v6;
    *(_DWORD *)(a4 + 16) = v7;
  }
  else
  {
    *(_OWORD *)a3 = xmmword_1801609A8;
    *(_DWORD *)(a3 + 16) = 6;
    *(_OWORD *)a4 = xmmword_180160BA0;
    *(_DWORD *)(a4 + 16) = 14;
  }
  return v4;
}
