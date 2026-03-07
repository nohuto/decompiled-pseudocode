PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 i; // r15
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h]
  unsigned __int64 v21; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0LL;
  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_9;
  Buffer = a3;
  v11 = v5;
  if ( v10 > 1 )
    v11 = 4096LL;
  v23 = v11;
  ViAvlNodeInitializeSessionId(a1, &Buffer);
  v12 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v20 = 192 * v12;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v12 + a1[2], a2);
  v13 = a1[2];
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v12 + v13), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v20 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_9:
    v15 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v21 = v9 + 4096;
      if ( v9 + 4096 <= v15 )
        v23 = 4096LL;
      else
        v23 = v15 - v9;
      ViAvlNodeInitializeSessionId(a1, &Buffer);
      v17 = ViAvlTableIndex(a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v18 = 192 * v17;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v17 + a1[2], a2);
      v19 = a1[2];
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(192 * v17 + v19), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v18 + a1[2], a2);
      v9 = v21;
    }
  }
  return v4;
}
