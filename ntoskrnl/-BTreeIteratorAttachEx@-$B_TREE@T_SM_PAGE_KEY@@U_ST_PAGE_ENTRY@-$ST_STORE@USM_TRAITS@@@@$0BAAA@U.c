/*
 * XREFs of ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x1405B909C
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045D10A (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C369C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
        __int64 a1,
        _QWORD *a2)
{
  char *v2; // r8
  struct NP_CONTEXT::NP_CTX *v4; // rdi

  v2 = (char *)*a2;
  *(_OWORD *)a1 = 0LL;
  if ( v2 )
  {
    if ( v2[3] )
    {
LABEL_10:
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = v2 + 8;
      return (__int64)v2;
    }
    v4 = (struct NP_CONTEXT::NP_CTX *)(a2 + 2);
    while ( 1 )
    {
      if ( **(_DWORD **)v4 == -1 || v2[2] != 2 )
      {
        v2 = (char *)*((_QWORD *)v2 + 1);
      }
      else
      {
        v2 = (char *)NP_CONTEXT::NpLeafRefInternal(v4, (void **)v2 + 1, 2u);
        if ( !v2 )
          return -1LL;
      }
      if ( v2[3] )
        goto LABEL_10;
    }
  }
  return (__int64)v2;
}
