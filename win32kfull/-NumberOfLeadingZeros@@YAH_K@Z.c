/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C0145E9E
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01C3F3C (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // ecx
  unsigned __int64 v8; // r8
  int v9; // eax
  unsigned __int64 v10; // rdx
  int v11; // ecx

  v1 = HIDWORD(a1);
  if ( !HIDWORD(a1) )
    v1 = a1;
  v2 = -(__int64)HIDWORD(a1);
  v3 = v1 >> 16;
  v4 = (-(__int64)(HIDWORD(a1) != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 64;
  if ( v1 < 0x10000 )
    v3 = v1;
  v5 = (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 48;
  if ( v1 < 0x10000 )
    LODWORD(v5) = v4;
  v6 = v3 >> 8;
  if ( v3 < 0x100 )
    v6 = v3;
  v7 = v5 - 8;
  if ( v3 < 0x100 )
    v7 = v5;
  v8 = v6 >> 4;
  if ( v6 < 0x10 )
    v8 = v6;
  v9 = v7 - 4;
  if ( v6 < 0x10 )
    v9 = v7;
  v10 = v8 >> 2;
  if ( v8 < 4 )
    v10 = v8;
  v11 = v9 - 2;
  if ( v8 < 4 )
    v11 = v9;
  if ( v10 < 2 )
    return (unsigned int)(v11 - v10);
  else
    return (unsigned int)(v11 - 2);
}
