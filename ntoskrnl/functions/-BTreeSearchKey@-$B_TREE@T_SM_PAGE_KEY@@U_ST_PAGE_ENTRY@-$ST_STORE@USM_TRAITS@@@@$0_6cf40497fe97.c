__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v8; // ebp
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  char *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  void **v14; // rcx
  char *v15; // r8

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    (__int64 *)a1,
    a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v10 = 0LL;
    if ( *a1 )
      v10 = (unsigned __int8)(*a1)[2];
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)a3;
  }
  v11 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = -1;
    v13 = (unsigned __int16)*(_DWORD *)v11;
    if ( v11[3] )
      break;
    if ( (unsigned __int16)*(_DWORD *)v11 )
    {
      do
      {
        if ( *(_DWORD *)&v11[16 * ((v13 + v12) >> 1) + 16] <= a2 )
          v12 = (v13 + v12) >> 1;
        else
          v13 = (v13 + v12) >> 1;
      }
      while ( v12 + 1 != v13 );
    }
    if ( v8 )
    {
      *v9 = v11;
      v9[1] = &v11[16 * v13 + 16];
      v9 += 2;
    }
    if ( v13 )
      v14 = (void **)&v11[16 * v13 + 8];
    else
      v14 = (void **)(v11 + 8);
    if ( *(_DWORD *)a1[2] == -1 || v11[2] != 2 )
    {
      v11 = (char *)*v14;
    }
    else
    {
      v11 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                      v14,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  if ( (unsigned __int16)*(_DWORD *)v11 )
  {
    do
    {
      if ( *(_DWORD *)&v11[8 * ((v13 + v12) >> 1) + 16] >= a2 )
        v13 = (v13 + v12) >> 1;
      else
        v12 = (v13 + v12) >> 1;
    }
    while ( v12 + 1 != v13 );
  }
  *v9 = v11;
  v15 = &v11[8 * v13 + 16];
  v9[1] = v15;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( v13 >= (unsigned __int16)*(_DWORD *)v11 || *(_DWORD *)v15 < a2 || *(_DWORD *)v15 != a2 )
    return (unsigned int)-1073741275;
  return v7;
}
