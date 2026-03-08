/*
 * XREFs of ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x1405C6B50
 * Callers:
 *     <none>
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafDelete(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v5[1] = 0;
  v5[2] = a2 & 0xFFFFFFFC;
  v5[0] = 1;
  v3 = *(_QWORD *)(v2 + 128);
  v6 = 0LL;
  v5[3] = 1;
  return ST_STORE<SM_TRAITS>::StDmPageRemove(v3, (__int64)v5);
}
