/*
 * XREFs of ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405B8090
 * Callers:
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1405B7668 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1405B858C (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
        __int64 *a1,
        char a2,
        __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  _QWORD *v5; // r9
  int v6; // ebx
  __int64 *v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rdx

  v3 = a1[1];
  v4 = *a1;
  if ( a3 )
    v5 = (_QWORD *)(*(_QWORD *)a3 + 16LL * (*(_DWORD *)(a3 + 24) - (unsigned int)*(unsigned __int8 *)(v4 + 2)));
  else
    v5 = 0LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = (__int64 *)(v3 + 8);
    v3 += 16LL;
  }
  else
  {
    v7 = (__int64 *)(v3 - 8);
    if ( v3 <= v4 + 16 )
      v7 = (__int64 *)(v4 + 8);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      *v5 = v4;
      v5[1] = v3;
      v5 += 2;
    }
    if ( *(_BYTE *)(v4 + 2) == 2 )
      break;
    v4 = *v7;
    if ( v6 )
    {
      v8 = *v7;
      v9 = *v7;
    }
    else
    {
      v8 = v4 + 16LL * (unsigned __int16)*(_DWORD *)v4;
      v9 = v8;
    }
    v3 = v8 + 16;
    v7 = (__int64 *)(v9 + 8);
  }
  return v7;
}
