__int64 __fastcall KiSelectIdealProcessor(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // r10
  __int64 v6; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // r8
  __int64 v18; // rax

  v5 = a4 & 0x3F;
  v6 = a1;
  LOBYTE(a1) = a4 & 0x3F;
  v8 = 1LL << v5;
  if ( ((1LL << v5) & a2) == 0 )
  {
    _BitScanForward64((unsigned __int64 *)&a1, __ROR8__(a2, a1));
    v8 = 1LL << ((v5 + a1) & 0x3F);
  }
  v9 = a3;
  v10 = ~a2;
  for ( i = a3 & a2; (v8 & i) == 0; i = v9 & ~v10 )
  {
    v10 |= v9;
    v9 *= 2LL;
  }
  for ( j = ~(v8 | (v8 - 1)) & i; (j & v6) == 0; j = v9 & ~v10 )
  {
    v14 = v9 | v10;
    v9 *= 2LL;
    v15 = v14;
    v17 = a2 & ~v14;
    v16 = v17 == 0;
    v18 = v17;
    v10 = ~a2;
    if ( v16 )
      v9 = a3;
    if ( v18 )
      v10 = v15;
  }
  _BitScanForward64((unsigned __int64 *)&result, v6 & j);
  return result;
}
