/*
 * XREFs of ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1405BBDC8
 * Callers:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1405B800C (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1405BBEB8 (-NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBF58 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall NP_CONTEXT::NpNodeFree(struct NP_CONTEXT::NP_CTX *a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v4 = *(_QWORD *)a1;
  if ( a3 && (v5 = *(_QWORD **)(v4 + 72), --*(_DWORD *)(v4 + 40), *v5 < (unsigned __int64)*(unsigned int *)(v4 + 4)) )
  {
    *a2 = *v5 + 1LL;
    **(_QWORD **)(v4 + 72) = a2;
    *(_QWORD *)(v4 + 72) = a2;
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
