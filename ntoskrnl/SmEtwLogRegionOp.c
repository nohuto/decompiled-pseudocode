/*
 * XREFs of SmEtwLogRegionOp @ 0x1405C8A9C
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C3808 (-StDmEtwRegionRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405C4D60 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6F6C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmEtwLogRegionOp(REGHANDLE *a1, int a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  REGHANDLE v7; // rcx
  const EVENT_DESCRIPTOR *v8; // rdx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-21h] BYREF
  int *v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  char *v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  char *v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  char *v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+5Fh] BYREF
  int v20; // [rsp+D0h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v7 = *a1;
  v10.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&v10.Size = 8LL;
  v11 = &v20;
  v12 = 4LL;
  v8 = (const EVENT_DESCRIPTOR *)(&SmEtwDescriptorPtrs)[a2];
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  v14 = 4LL;
  v16 = 2LL;
  v18 = 2LL;
  return EtwWriteEx(v7, v8, 0LL, 1u, 0LL, 0LL, 5u, &v10);
}
