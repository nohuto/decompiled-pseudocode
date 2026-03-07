__int64 __fastcall ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  const void *v7; // rdx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(v3 + 96) )
  {
    v6 = v3 - 1448;
    v7 = *(const void **)(v3 - 1448);
    if ( !v7 )
      return result;
  }
  else
  {
    v6 = v3 - 1376;
    v7 = *(const void **)(v3 - 1376);
    if ( !v7 )
      return result;
  }
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
           v6,
           v7,
           &v8,
           a2,
           a3,
           (__int64)&v9);
}
