/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405C4D60
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1405C50D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x14035911C (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x1405C4F04 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x1405C8A9C (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  char v10; // dl
  void *v11; // rsp
  int Keys; // esi
  __int64 v13; // rbx
  int v14; // eax
  int *v15; // rbx
  int v16; // edx
  int *v17; // rdi
  int v18; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  __int64 v22; // [rsp+428h] [rbp+8h]
  __int128 v23; // [rsp+430h] [rbp+10h] BYREF
  __int128 v24; // [rsp+440h] [rbp+20h]

  v5 = a3;
  v23 = 0LL;
  v22 = a2;
  v24 = 0LL;
  LODWORD(v24) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  LODWORD(v23) = 1;
  v7 = SmEtwEnabled(0);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 1048);
    if ( v9 )
      v10 = *(_BYTE *)(v9 + v5);
    else
      v10 = 0;
    SmEtwLogRegionOp(v7, 3, a1, v5, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5), v10);
    v8 = v22;
  }
  v11 = alloca(1024LL);
LABEL_7:
  LODWORD(NumOfElements) = 256;
  Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v8, v5, v8, a5, (__int64)Base, (__int64)&NumOfElements);
  if ( Keys < 0 || !(_DWORD)NumOfElements )
    return (unsigned int)Keys;
  v13 = (unsigned int)NumOfElements;
  qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
  v14 = Base[0];
  v15 = &Base[v13];
  DWORD2(v23) = Base[0];
  v16 = Base[0];
  v17 = Base;
  v18 = 0;
LABEL_10:
  if ( v14 == v16 )
    goto LABEL_13;
  while ( 1 )
  {
    HIDWORD(v23) = v18;
    Keys = ST_STORE<SM_TRAITS>::StDmPageRemove(a1, (__int64)&v23);
    if ( Keys < 0 )
      return (unsigned int)Keys;
    v14 = *v17;
    v18 = 0;
    DWORD2(v23) = *v17;
LABEL_13:
    ++v18;
    if ( ++v17 < v15 )
    {
      v16 = *v17;
      ++v14;
      goto LABEL_10;
    }
    if ( v17 != v15 )
    {
      v8 = v22;
      if ( (unsigned int)NumOfElements < 0x100 )
        return (unsigned int)Keys;
      goto LABEL_7;
    }
  }
}
