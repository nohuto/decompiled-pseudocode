/*
 * XREFs of ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1405BBD34
 * Callers:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1405B9D80 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1405BBEB8 (-NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 * Callees:
 *     ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBE3C (-NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBF58 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall NP_CONTEXT::NpNodeAllocate(struct NP_CONTEXT::NP_CTX *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 Pool2; // rax
  void *ReservedBuffer; // rdi

  v3 = *(_QWORD *)a1;
  Pool2 = ExAllocatePool2(64LL, 4096LL, 1884188019LL);
  ReservedBuffer = (void *)Pool2;
  if ( (Pool2 || (a3 & 2) != 0)
    && (a3 & 1) != 0
    && (Pool2 || (ReservedBuffer = NP_CONTEXT::NpiGetReservedBuffer((struct NP_CONTEXT *)v3, a1)) != 0LL)
    && ++*(_DWORD *)(v3 + 40) > *(_DWORD *)v3 )
  {
    NP_CONTEXT::NpiPerformPageOut((struct NP_CONTEXT *)v3, a1);
  }
  return ReservedBuffer;
}
