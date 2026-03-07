__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v5; // rdx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // r8
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int64 *v15; // r8
  unsigned int *v16; // r9

  v3 = 0;
  v5 = (_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    *v5 = 0LL;
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    v8 = 1;
    v9 = *a1;
    v10 = 0LL;
    if ( v9 )
      v10 = *(unsigned __int8 *)(v9 + 2);
    v11 = (_DWORD *)(a3 + 28);
    if ( *v11 < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v5, v11, a3) )
      return (unsigned int)-1073741670;
    v5 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v13 = -1;
    v14 = (unsigned __int16)*(_DWORD *)v12;
    if ( *(_BYTE *)(v12 + 3) )
      break;
    if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 16LL * ((v14 + v13) >> 1) + 16) <= a2 )
          v13 = (v14 + v13) >> 1;
        else
          v14 = (v14 + v13) >> 1;
      }
      while ( v13 + 1 != v14 );
    }
    if ( v8 )
    {
      *v5 = v12;
      v5[1] = v12 + 16 * (v14 + 1LL);
      v5 += 2;
    }
    if ( v14 )
      v15 = (__int64 *)(16LL * (v14 - 1) + v12 + 24);
    else
      v15 = (__int64 *)(v12 + 8);
    v12 = *v15;
  }
  if ( (unsigned __int16)*(_DWORD *)v12 )
  {
    do
    {
      if ( *(_DWORD *)(v12 + 8LL * ((v14 + v13) >> 1) + 16) >= a2 )
        v14 = (v14 + v13) >> 1;
      else
        v13 = (v14 + v13) >> 1;
    }
    while ( v13 + 1 != v14 );
  }
  *v5 = v12;
  v16 = (unsigned int *)(v12 + 8 * (v14 + 2LL));
  v5[1] = v16;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v5 - *(_QWORD *)a3) >> 4) + 1;
  if ( v14 >= (unsigned __int16)*(_DWORD *)v12 || *v16 < a2 || *v16 != a2 )
    return (unsigned int)-1073741275;
  return v3;
}
