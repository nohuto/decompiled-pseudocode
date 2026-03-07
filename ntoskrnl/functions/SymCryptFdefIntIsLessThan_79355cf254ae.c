unsigned __int64 __fastcall SymCryptFdefIntIsLessThan(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // edx
  _DWORD *v13; // r8
  __int64 v14; // rax
  int IsLessThanC; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // r8

  v2 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a2 + 4);
  v6 = a2 + 32;
  v7 = a1 + 32;
  if ( v2 == v4 )
  {
    return (unsigned int)SymCryptFdefRawIsLessThanC(v7, v6, v2);
  }
  else if ( v2 >= v4 )
  {
    IsLessThanC = SymCryptFdefRawIsLessThanC(v7, v6, v4);
    v16 = 0;
    v17 = 16 * (v2 - v4);
    v18 = IsLessThanC;
    if ( v17 )
    {
      v19 = v17;
      v20 = (_DWORD *)(a1 + 32 + 64LL * v4);
      do
      {
        v16 |= *v20++;
        --v19;
      }
      while ( v19 );
    }
    return (unsigned int)(~((unsigned __int64)-(__int64)v16 >> 32) & v18);
  }
  else
  {
    v9 = SymCryptFdefRawIsLessThanC(v7, v6, v2);
    v10 = 0;
    v11 = 16 * (v4 - v2);
    v12 = v9;
    if ( v11 )
    {
      v13 = (_DWORD *)(a2 + 4 * (16 * v2 + 8LL));
      v14 = v11;
      do
      {
        v10 |= *v13++;
        --v14;
      }
      while ( v14 );
    }
    return (unsigned int)(((unsigned __int64)-(__int64)v10 >> 32) | v12);
  }
}
