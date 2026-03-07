void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v3; // edx
  struct NP_CONTEXT::NP_CTX *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  __int64 v13; // rdx
  void *v14; // rsp
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  void **v18; // rdx
  __int64 *v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  void **v22; // rdx
  unsigned __int64 v23; // rcx
  void **v24; // rax
  __int64 v25; // [rsp+20h] [rbp+0h] BYREF
  __int128 v26; // [rsp+28h] [rbp+8h]
  int v27; // [rsp+38h] [rbp+18h]
  unsigned int v28; // [rsp+3Ch] [rbp+1Ch]
  int v29; // [rsp+40h] [rbp+20h]
  int v30; // [rsp+44h] [rbp+24h]

  v3 = *(_DWORD *)(a2 + 24);
  v5 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  if ( **(_DWORD **)v5 == -1 )
  {
    if ( v3 != -1 )
    {
LABEL_4:
      *(_DWORD *)(a2 + 24) = 0;
      return;
    }
  }
  else
  {
    if ( v3 != -1 )
    {
      if ( v3 > 1 )
      {
        v19 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v3 - 2));
        v20 = v19[1];
        v21 = *v19;
        v22 = (void **)(v20 - 8);
        v23 = v21 + 16;
        v24 = (void **)(v21 + 8);
        if ( v20 <= v23 )
          v22 = v24;
        NP_CONTEXT::NpLeafDerefInternal(v5, v22);
      }
      goto LABEL_4;
    }
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v7 = *a1;
      if ( v6 != *a1 )
      {
        if ( v7 )
          v8 = *(unsigned __int8 *)(v7 + 2);
        else
          v8 = 0;
        v9 = 16LL * v8;
        v10 = v9 + 15;
        if ( v9 + 15 < v9 )
          v10 = 0xFFFFFFFFFFFFFF0LL;
        v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
        v12 = alloca(v11);
        v13 = *(unsigned int *)(v6 + 16);
        v30 = 0;
        v14 = alloca(v11);
        v27 = 0;
        v29 = 1;
        v26 = 0LL;
        v28 = v8;
        v25 = (__int64)&v25;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1,
          v13,
          &v25);
        v15 = 2LL * (v8 - 2);
        v16 = *(&v25 + 2 * v8 - 3);
        v17 = *(&v25 + v15);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a1,
          &v25);
        v18 = (void **)(v16 - 8);
        if ( v16 <= v17 + 16 )
          v18 = (void **)(v17 + 8);
        if ( **(_DWORD **)v5 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v5, v18);
      }
    }
  }
  *(_QWORD *)(a2 + 8) = 0LL;
}
