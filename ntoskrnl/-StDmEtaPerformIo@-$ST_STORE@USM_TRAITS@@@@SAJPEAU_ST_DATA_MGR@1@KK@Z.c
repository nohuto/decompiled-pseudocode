/*
 * XREFs of ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1405C3430
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C3534 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405C1BF4 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmWaitForSyncIo @ 0x1405CB760 (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaPerformIo(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2 << *(_DWORD *)(a1 + 812);
  v12 = 0LL;
  LOWORD(a3) = a3 - *(_WORD *)(a1 + 824);
  LODWORD(v12) = v4;
  WORD2(v12) = a3;
  v5 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, (__int64)&v12, a3, 57005LL);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 28) |= 0xCu;
    v10 = 0LL;
    v11 = &v10;
    *(_QWORD *)v5 = *(_DWORD *)v5 & 7 | 8LL;
    *v11 = v5 | *(_DWORD *)v11 & 7;
    v11 = (__int64 *)v5;
    if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v10) >= 0 )
      SmWaitForSyncIo(*(_QWORD *)(a1 + 800));
    if ( (*(_DWORD *)(v7 + 28) & 1) == 0 )
    {
      *(_DWORD *)(v7 + 28) |= 1u;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
        *(_DWORD *)(v8 + 4) = -1073741691;
      else
        *(_DWORD *)(v7 + 8) = -1073741691;
    }
    ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
