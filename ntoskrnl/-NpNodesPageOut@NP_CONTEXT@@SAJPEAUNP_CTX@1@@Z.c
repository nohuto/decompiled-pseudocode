/*
 * XREFs of ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1405BBE14
 * Callers:
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C697C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBF58 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 */

int __fastcall NP_CONTEXT::NpNodesPageOut(struct NP_CONTEXT::NP_CTX *a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(v2 + 40) <= *(_DWORD *)v2 )
    return 0;
  else
    return NP_CONTEXT::NpiPerformPageOut((struct NP_CONTEXT *)v2, a1);
}
