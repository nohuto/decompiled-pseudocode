/*
 * XREFs of ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9250
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1405C0D5C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x1405C3904 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E72DC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BABD4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405BBB7C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
        __int64 *a1,
        __int64 *a2)
{
  struct NP_CONTEXT::NP_CTX *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  __int64 v11; // rdx
  void *v12; // rsp
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  void **v16; // rdx
  __int64 v17; // [rsp+20h] [rbp+0h] BYREF
  __int128 v18; // [rsp+28h] [rbp+8h]
  int v19; // [rsp+38h] [rbp+18h]
  unsigned int v20; // [rsp+3Ch] [rbp+1Ch]
  int v21; // [rsp+40h] [rbp+20h]
  int v22; // [rsp+44h] [rbp+24h]

  v3 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a2 + 2) & -(__int64)(a2 != 0LL));
  if ( **(_DWORD **)v3 != -1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = *a2;
      if ( v4 != *a2 )
      {
        if ( v5 )
          v6 = *(unsigned __int8 *)(v5 + 2);
        else
          v6 = 0;
        v7 = 16LL * v6;
        v8 = v7 + 15;
        if ( v7 + 15 < v7 )
          v8 = 0xFFFFFFFFFFFFFF0LL;
        v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        v10 = alloca(v9);
        v11 = *(unsigned int *)(v4 + 16);
        v22 = 0;
        v12 = alloca(v9);
        v19 = 0;
        v21 = 1;
        v18 = 0LL;
        v20 = v6;
        v17 = (__int64)&v17;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a2,
          v11,
          &v17);
        v13 = 2LL * (v6 - 2);
        v14 = *(&v17 + 2 * v6 - 3);
        v15 = *(&v17 + v13);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a2,
          (__int64)&v17);
        v16 = (void **)(v14 - 8);
        if ( v14 <= v15 + 16 )
          v16 = (void **)(v15 + 8);
        if ( **(_DWORD **)v3 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v3, v16);
      }
    }
  }
}
