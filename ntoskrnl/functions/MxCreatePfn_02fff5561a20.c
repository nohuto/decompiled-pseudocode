__int64 __fastcall MxCreatePfn(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 result; // rax

  v9 = 48 * a1 - 0x220000000000LL;
  if ( a6 )
  {
    *(_OWORD *)v9 = 0LL;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_OWORD *)(v9 + 32) = 0LL;
  }
  MiSetPfnPteFrame(48 * a1 - 0x220000000000LL, a4);
  v10 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 8) = a2;
  v11 = 1;
  v12 = v10 ^ (v10 ^ (v10 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_WORD *)(v9 + 32) = 1;
  LOBYTE(v10) = *(_BYTE *)(v9 + 34) & 0xFE;
  *(_QWORD *)(v9 + 24) = v12;
  v13 = v10 | 6;
  *(_BYTE *)(v9 + 34) = v13;
  if ( (a3 & 0x10) != 0 )
  {
    v11 = 0;
  }
  else if ( (a3 & 8) != 0 )
  {
    v11 = 2;
  }
  *(_BYTE *)(v9 + 34) = v13 & 0x3F | (v11 << 6);
  v14 = MiSwizzleInvalidPte(128LL);
  if ( v15 == v16 )
  {
    v14 |= 0x300uLL;
  }
  else if ( !v15 )
  {
    v14 |= 0x100uLL;
  }
  v17 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 16) = v14;
  *(_BYTE *)(v9 + 34) |= 0x10u;
  result = v17 | 0x40000000000000LL;
  *(_QWORD *)(v9 + 40) = v17 | 0x40000000000000LL;
  if ( a5 )
  {
    if ( a1 == (a1 & 0xFFFFFFFFFFFFFE00uLL) )
      *(_BYTE *)(v9 + 36) = v16 | *(_BYTE *)(v9 + 36) & 0xFE;
    *(_WORD *)(v9 + 32) = v16;
    result = 0x40010000000000LL;
    *(_QWORD *)(v9 + 40) = v17 | 0x40010000000000LL;
  }
  return result;
}
