/*
 * XREFs of ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1405C3334
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C53A8 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  unsigned int *v5; // r9
  _DWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  int v11; // ecx
  int v12; // r15d
  int v13; // edi
  __int64 *v14; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 792);
  v5 = *(unsigned int **)(a3 + 8);
  v8 = v5 + 3;
  v9 = 4LL * *v5;
  v10 = (unsigned __int64)&v5[v9 + 3];
  v11 = 16 * (v5[3] & *(_DWORD *)(a1 + 808));
  v12 = v11 - (-v3 & v11) + (-v3 & (v3 + v9 * 4 + (_DWORD)v5 + 11));
  if ( (unsigned __int64)(v5 + 3) >= v10 )
    return 0LL;
  v13 = (*(_DWORD *)(a3 + 20) & 0x10) != 0 ? 2 : 0;
  while ( 1 )
  {
    v14 = (__int64 *)(a2 + 16);
    if ( !a2 )
      v14 = (__int64 *)a3;
    result = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
               a1,
               *(_QWORD *)(a1 + 896),
               (v12 + 16 * (*v8 - *(_DWORD *)(a3 + 16))) | (unsigned int)v13,
               a2,
               *v14,
               (__int64)v8,
               0LL);
    if ( (int)result < 0 )
      break;
    v8 += 4;
    if ( (unsigned __int64)v8 >= v10 )
      return 0LL;
  }
  return result;
}
