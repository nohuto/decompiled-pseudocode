__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  __int64 *v11; // rsi
  _DWORD *v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // edx
  _DWORD *v22; // r8
  int v23; // edx
  char v24; // al
  int v25; // ebp
  __int64 v26; // rcx
  void **v27; // rdx
  struct NP_CONTEXT::NP_CTX *v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  void **v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  void **v35; // rax
  struct NP_CONTEXT::NP_CTX *v36; // rcx
  _QWORD *v37; // rsi
  int v38; // eax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *a1 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = *(__int64 **)a2;
    *v11 = v10;
    v11[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v12 = (_DWORD *)*v11;
  v13 = (unsigned __int8)-(*(_BYTE *)(*v11 + 3) != 0) + 255;
  if ( (unsigned __int16)*(_DWORD *)*v11 >= v13 )
  {
    v14 = v11[1] - (_QWORD)v12 - 16;
    v15 = v14 >> 3;
    v16 = v14 >> 4;
    if ( !*(_BYTE *)(*v11 + 3) )
      LODWORD(v15) = v16;
    if ( v12 == (_DWORD *)*a1 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v17 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      v18 = *(v11 - 1);
      v19 = v17;
      v20 = v18 + 32LL * ((v17 & 1) == 0) - 16;
    }
    v21 = (unsigned __int16)*v12;
    if ( v21 < v13 )
    {
      if ( (v19 & 1) != 0 )
      {
        v22 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
        v23 = v15 + v21 - v13;
        if ( *((_BYTE *)v12 + 3) )
        {
          if ( v23 > 0 )
          {
LABEL_20:
            if ( v12 == v22 )
            {
LABEL_21:
              *(v11 - 1) = v20;
              goto LABEL_43;
            }
            v18 = v20;
LABEL_43:
            *v11 = (__int64)v12;
            v31 = v23;
            if ( *((_BYTE *)v12 + 3) )
            {
              v32 = (void **)(v18 - 8);
              v11[1] = (__int64)&v12[2 * v31 + 4];
              v33 = *(v11 - 2);
              v34 = v33 + 16;
              v35 = (void **)(v33 + 8);
              if ( v18 <= v34 )
                v32 = v35;
              v36 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
              if ( **(_DWORD **)v36 != -1 )
                NP_CONTEXT::NpLeafDerefInternal(v36, v32);
            }
            else
            {
              v11[1] = (__int64)&v12[4 * v23 + 4];
            }
            goto LABEL_49;
          }
        }
        else
        {
          if ( v23 >= 0 )
            goto LABEL_20;
          ++v23;
        }
        v12 = v22;
        v23 += (unsigned __int16)*v22;
        goto LABEL_21;
      }
      if ( (int)v15 > v21 )
      {
        v24 = *((_BYTE *)v12 + 3);
        v25 = v15 - v21;
        v12 = (_DWORD *)v19;
        *(v11 - 1) = v20;
        goto LABEL_38;
      }
      v18 = v20;
      goto LABEL_42;
    }
    if ( v19 && *((_BYTE *)v12 + 3) )
    {
      v26 = *(v11 - 2);
      v27 = (void **)(v20 - 8);
      if ( v20 <= v26 + 16 )
        v27 = (void **)(v26 + 8);
      v28 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
      if ( **(_DWORD **)v28 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v28, v27);
    }
    v29 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2);
    if ( v29 )
    {
      v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v30 = (unsigned __int16)*v12;
      v18 = *(v11 - 1);
      if ( (int)v15 > v30 )
      {
        v25 = v15 - v30;
        v24 = *((_BYTE *)v12 + 3);
        v12 = (_DWORD *)v29;
        *(v11 - 1) = v18 + 16;
LABEL_38:
        v23 = v25 - 1;
        if ( v24 )
          v23 = v25;
        goto LABEL_43;
      }
      v18 += 16LL;
LABEL_42:
      v23 = v15;
      goto LABEL_43;
    }
    return (unsigned int)-1073741670;
  }
LABEL_49:
  v37 = (_QWORD *)v11[1];
  v38 = *v12;
  if ( *((_BYTE *)v12 + 3) )
  {
    memmove(v37 + 1, v37, (size_t)v12 + 8LL * (unsigned __int16)v38 + 16 - (_QWORD)v37);
    *v37 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v37 + 2, v37, (size_t)v12 + 16 * ((unsigned __int16)v38 + 1LL) - (_QWORD)v37);
    *(_OWORD *)v37 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return v4;
}
