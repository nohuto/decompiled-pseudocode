/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C01ECCF0
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01EE3C8 (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  int v6; // ecx
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned __int64 v9; // rdx
  int v10; // ecx

  v1 = HIDWORD(a1);
  if ( HIDWORD(a1) )
    a1 >>= 32;
  v2 = a1 >> 16;
  v3 = (((unsigned __int128)-(__int128)v1 >> 64) & 0xFFFFFFFFFFFFFFE0uLL) + 64;
  if ( a1 < 0x10000 )
    v2 = a1;
  v4 = (((unsigned __int128)-(__int128)v1 >> 64) & 0xFFFFFFFFFFFFFFE0uLL) + 48;
  if ( a1 < 0x10000 )
    LODWORD(v4) = v3;
  v5 = v2 >> 8;
  if ( v2 < 0x100 )
    v5 = v2;
  v6 = v4 - 8;
  if ( v2 < 0x100 )
    v6 = v4;
  v7 = v5 >> 4;
  if ( v5 < 0x10 )
    v7 = v5;
  v8 = v6 - 4;
  if ( v5 < 0x10 )
    v8 = v6;
  v9 = v7 >> 2;
  v10 = v8 - 2;
  if ( v7 < 4 )
  {
    v9 = v7;
    v10 = v8;
  }
  if ( v9 < 2 )
    return (unsigned int)(v10 - v9);
  else
    return (unsigned int)(v10 - 2);
}
