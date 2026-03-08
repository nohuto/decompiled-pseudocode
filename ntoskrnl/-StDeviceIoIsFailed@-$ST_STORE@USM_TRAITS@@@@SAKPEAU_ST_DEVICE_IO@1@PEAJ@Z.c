/*
 * XREFs of ?StDeviceIoIsFailed@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DEVICE_IO@1@PEAJ@Z @ 0x1405C1DD4
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
    return 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      a1 = v3 + 4;
    *a2 = *(_DWORD *)a1;
  }
  return 1LL;
}
