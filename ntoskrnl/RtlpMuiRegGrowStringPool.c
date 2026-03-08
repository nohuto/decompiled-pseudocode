/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x140A720D0
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x140844498 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x140A72414 (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *P, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // r9d
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // eax

  v5 = P;
  if ( P )
  {
    v6 = 16;
    v7 = P[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v8 = P[2];
    v9 = P[5] + v6;
    v10 = v8;
    if ( v7 >= v8 )
      v10 = v7;
    v11 = v5[4];
    v12 = v11;
    if ( v9 >= v11 )
      v12 = v9;
    if ( a4 || v10 != v8 || v12 != v11 )
      return RtlpMuiRegResizeStringPool(v5);
  }
  return (__int64)v5;
}
