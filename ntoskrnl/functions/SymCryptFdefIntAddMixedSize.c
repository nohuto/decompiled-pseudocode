__int64 __fastcall SymCryptFdefIntAddMixedSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  unsigned int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r15
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r13
  _DWORD *v21; // rcx
  unsigned __int64 v22; // rdi

  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a3 + 4);
  v9 = a3 + 32;
  v10 = a2 + 32;
  v11 = a1 + 32;
  if ( v3 >= v5 )
  {
    v12 = (unsigned int)SymCryptFdefRawAddAsm(v11, v10, v9, v5);
    v18 = 16 * (v3 - v5);
    if ( v18 )
    {
      v19 = v18;
      v20 = a1 - a3;
      v21 = (_DWORD *)(a3 + 4 * (16 * v5 + 8LL));
      do
      {
        v22 = *(unsigned int *)((char *)v21 + v20) + v12;
        *v21++ = v22;
        v12 = HIDWORD(v22);
        --v19;
      }
      while ( v19 );
    }
    v5 = v3;
  }
  else
  {
    v12 = (unsigned int)SymCryptFdefRawAddAsm(v11, v10, v9, v3);
    v13 = 16 * (v5 - v3);
    if ( v13 )
    {
      v14 = v13;
      v15 = a2 - a3;
      v16 = (_DWORD *)(a3 + 4 * (16 * v3 + 8LL));
      do
      {
        v17 = *(unsigned int *)((char *)v16 + v15) + v12;
        *v16++ = v17;
        v12 = HIDWORD(v17);
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v5 < v7 )
  {
    SymCryptWipe(a3 + 32 + 64LL * v5, (v7 - v5) << 6);
    *(_DWORD *)(a3 + 64LL * v5 + 32) = v12;
    LODWORD(v12) = 0;
  }
  return (unsigned int)v12;
}
