/*
 * XREFs of SymCryptFdefIntSubMixedSize @ 0x1403FDAC8
 * Callers:
 *     SymCryptIntSubMixedSize @ 0x1403F397C (SymCryptIntSubMixedSize.c)
 * Callees:
 *     SymCryptFdefRawNeg @ 0x1403FE128 (SymCryptFdefRawNeg.c)
 *     SymCryptFdefRawSubUint32 @ 0x1403FE1D4 (SymCryptFdefRawSubUint32.c)
 *     SymCryptFdefRawSubAsm @ 0x140400200 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefIntSubMixedSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rdi

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a3 + 4);
  v9 = a3 + 32;
  v10 = a2 + 32;
  v11 = a1 + 32;
  if ( v3 >= v5 )
  {
    v15 = SymCryptFdefRawSubAsm(v11, v10, v9, v5);
    LODWORD(result) = SymCryptFdefRawSubUint32(a1 + 32 + 64LL * v5, v15, a3 + 32 + 64LL * v5, v3 - v5);
    v14 = 16 * v3;
  }
  else
  {
    v12 = SymCryptFdefRawSubAsm(v11, v10, v9, v3);
    LODWORD(result) = SymCryptFdefRawNeg(a2 + 4 * (16 * v3 + 8LL), v12, a3 + 32 + 64LL * v3, v5 - v3);
    v14 = 16 * v5;
  }
  v16 = 16 * v6;
  if ( v14 < v16 )
  {
    v17 = v16 - v14;
    v18 = (_DWORD *)(a3 + 4LL * v14 + 32);
    while ( v17 )
    {
      *v18++ = -(int)result;
      --v17;
    }
  }
  return (unsigned int)result;
}
