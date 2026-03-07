__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
        __int64 a1,
        __int64 a2)
{
  __int64 LeafSibling; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  __int64 v9; // rdx
  void *v10; // rsp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  void **v13; // rsi
  unsigned __int64 v14; // rcx
  void **v15; // rax
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp+0h] BYREF
  __int128 v19; // [rsp+28h] [rbp+8h]
  int v20; // [rsp+38h] [rbp+18h]
  unsigned int v21; // [rsp+3Ch] [rbp+1Ch]
  int v22; // [rsp+40h] [rbp+20h]
  int v23; // [rsp+44h] [rbp+24h]

  LeafSibling = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( v4 == 1 )
      return LeafSibling;
  }
  else
  {
    v4 = 0;
  }
  v5 = 16LL * v4;
  v6 = v5 + 15;
  if ( v5 + 15 < v5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = *(unsigned int *)(a2 + 16);
  v23 = 0;
  v10 = alloca(v7);
  v20 = 0;
  v22 = 1;
  v19 = 0LL;
  v21 = v4;
  v18 = (__int64)&v18;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1,
    v9,
    &v18);
  v11 = *(&v18 + 2 * v4 - 3);
  v12 = *(&v18 + 2 * v4 - 4);
  v13 = (void **)(v11 - 8);
  v14 = v12 + 16;
  v15 = (void **)(v12 + 8);
  if ( v11 <= v14 )
    v13 = v15;
  LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSiblingEx(
                  a1,
                  &v18,
                  3LL);
  if ( v13 )
  {
    v16 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v16, v13);
  }
  return LeafSibling;
}
