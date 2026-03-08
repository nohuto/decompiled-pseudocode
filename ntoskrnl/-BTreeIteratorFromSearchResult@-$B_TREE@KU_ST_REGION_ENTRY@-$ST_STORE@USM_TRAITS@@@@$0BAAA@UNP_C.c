/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B9644
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1405C0D5C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x1405C3904 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E72DC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BABD4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int8 *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        unsigned __int8 **a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // edx
  __int64 v6; // r8
  unsigned __int8 *result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void **v11; // rax
  bool v12; // cc
  void **v13; // r9
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  __int64 v19; // rdx
  void *v20; // rsp
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // [rsp+20h] [rbp+0h] BYREF
  __int128 v25; // [rsp+28h] [rbp+8h]
  int v26; // [rsp+38h] [rbp+18h]
  unsigned int v27; // [rsp+3Ch] [rbp+1Ch]
  int v28; // [rsp+40h] [rbp+20h]
  int v29; // [rsp+44h] [rbp+24h]

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 == -1 || !v4 )
    v6 = a3 + 8;
  else
    v6 = *(_QWORD *)a3 + 16LL * (unsigned int)(v4 - 1);
  *(_OWORD *)a2 = *(_OWORD *)v6;
  result = *(unsigned __int8 **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  if ( *(_DWORD *)result != -1 )
  {
    if ( *(_QWORD *)a2 )
    {
      result = *a1;
      if ( *(unsigned __int8 **)a2 != *a1 )
      {
        if ( v4 == -1 )
        {
          if ( result )
            v14 = result[2];
          else
            v14 = 0;
          v15 = 16LL * v14;
          v16 = v15 + 15;
          if ( v15 + 15 < v15 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = alloca(v17);
          v19 = *(unsigned int *)(*(_QWORD *)v6 + 16LL);
          v29 = 0;
          v20 = alloca(v17);
          v26 = 0;
          v28 = 1;
          v25 = 0LL;
          v27 = v14;
          v24 = (__int64)&v24;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1,
            v19,
            &v24);
          v21 = 2LL * (v14 - 2);
          v22 = *(&v24 + 2 * v14 - 3);
          v23 = *(&v24 + v21);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)a1,
            (__int64)&v24);
          v12 = v22 <= v23 + 16;
          v11 = (void **)(v23 + 8);
          v13 = (void **)(v22 - 8);
        }
        else
        {
          v8 = *(_QWORD *)(v6 - 16);
          v9 = *(_QWORD *)(v6 - 8);
          v10 = v8 + 16;
          v11 = (void **)(v8 + 8);
          v12 = v9 <= v10;
          v13 = (void **)(v9 - 8);
        }
        if ( v12 )
          v13 = v11;
        result = a1[2];
        if ( *(_DWORD *)result != -1 )
          result = (unsigned __int8 *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 2), v13, 3u);
      }
    }
  }
  *(_QWORD *)(a2 + 8) -= 4LL;
  return result;
}
