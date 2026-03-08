/*
 * XREFs of SmCrAuthDecrypt @ 0x1405CB78C
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14045D346 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     BCryptDecrypt @ 0x1405B51EC (BCryptDecrypt.c)
 */

NTSTATUS __fastcall SmCrAuthDecrypt(__int64 a1, UCHAR *a2, UCHAR *a3, ULONG a4, __int64 a5, ULONG a6, __int64 a7)
{
  UCHAR *v8; // [rsp+20h] [rbp-38h]
  ULONG v9; // [rsp+28h] [rbp-30h]
  ULONG v10; // [rsp+48h] [rbp-10h]

  a6 = 0;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 96) = a7;
  *(_DWORD *)(a1 + 72) = 12;
  *(_DWORD *)(a1 + 104) = 16;
  return BCryptDecrypt(*(BCRYPT_KEY_HANDLE *)(a1 + 32), a2, a4, (void *)(a1 + 56), v8, v9, a3, a4, &a6, v10);
}
