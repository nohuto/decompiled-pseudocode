/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4B6C
 * Callers:
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1405BE638 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x1403D2040 (MmAreMdlPagesCached.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1405C5EE4 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v5; // r14d
  bool v6; // zf
  __int64 v8; // xmm1_8
  unsigned int v9; // r12d
  __int128 v10; // xmm0
  __int128 *v11; // rsi
  int i; // eax
  __int128 *v13; // rcx
  unsigned __int8 v14; // cl
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int128 v25; // [rsp+58h] [rbp-18h] BYREF

  v21 = 0LL;
  v22 = (__int64 *)&v21;
  v3 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 48) == 0LL;
  v8 = *(_QWORD *)(a3 + 24);
  v25 = 0LL;
  v9 = (unsigned __int8)v3;
  v10 = *(_OWORD *)(a3 + 8);
  v24 = v8;
  v23 = v10;
  if ( !v6 && !(unsigned int)MmAreMdlPagesCached(*(_DWORD **)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  v11 = &v25;
  for ( i = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v23, a3, (__int64)&v25);
        ;
        i = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v23, a3, (__int64)v11) )
  {
    v16 = i;
    if ( i < 0 )
    {
      v14 = v23;
      goto LABEL_11;
    }
    v13 = v11 + 1;
    if ( i != 259 )
      v13 = v11;
    v11 = v13;
    v14 = v23 + 1;
    v15 = (unsigned __int8)(v23 + 1);
    LODWORD(v23) = (unsigned __int8)(v23 ^ (v23 + 1)) ^ (unsigned int)v23;
    if ( v15 >= v9 )
      break;
    LODWORD(v24) = v24 + 1;
  }
  v16 = 0;
LABEL_11:
  if ( *(_BYTE *)(a3 + 8) != v14 )
    *(_BYTE *)(a3 + 8) = v23;
  v17 = v22;
  if ( v22 != (__int64 *)&v21 )
  {
    while ( v17 != (__int64 *)&v21 )
    {
      v18 = (__int64)v21;
      v21 = (_QWORD *)(*v21 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (__int64 *)v18 == v17 )
      {
        v21 = 0LL;
        v22 = (__int64 *)&v21;
      }
      else
      {
        *v17 = *v17 & 7 | (8 * ((unsigned __int64)*v17 >> 3) - 8);
      }
      if ( (*(_DWORD *)(v18 + 28) & 1) == 0 )
      {
        *(_DWORD *)(v18 + 28) |= 1u;
        v19 = *(_QWORD *)(v18 + 16);
        if ( v19 )
          *(_DWORD *)(v19 + 4) = v16;
        else
          *(_DWORD *)(v18 + 8) = v16;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v18);
      v17 = v22;
    }
    return 259;
  }
  return v16;
}
