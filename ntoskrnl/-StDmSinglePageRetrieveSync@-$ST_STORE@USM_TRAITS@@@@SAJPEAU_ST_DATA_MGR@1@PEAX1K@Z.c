/*
 * XREFs of ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x1405C5290
 * Callers:
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1405C6BA0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405C1BF4 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1405C5EE4 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     SmWaitForSyncIo @ 0x1405CB760 (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _DWORD *v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v13 = a3;
  v12 = 0LL;
  HIDWORD(v14) = 0;
  v15 = 0LL;
  v5 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v14 = a2;
  else
    LODWORD(v14) = *a2;
  result = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, (int)a1 + 912, (unsigned int)&v12, a4, (__int64)&v15);
  if ( (int)result >= 1 )
  {
    v8 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, (__int64)&v15, v7, v13);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v8 + 28) & 0xFFFFFFEF | (v5 != 0 ? 0x10 : 0) | 0xC;
      v11 = &v10;
      v10 = 0LL;
      *(_QWORD *)v8 = *(_DWORD *)v8 & 7 | 8LL;
      *v11 = v8 | *(_DWORD *)v11 & 7;
      v11 = (__int64 *)v8;
      if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v10) >= 0 )
        SmWaitForSyncIo(*(_QWORD *)(a1 + 800));
      result = ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v9);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
