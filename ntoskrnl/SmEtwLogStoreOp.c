/*
 * XREFs of SmEtwLogStoreOp @ 0x1405C8CA0
 * Callers:
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C369C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmEtwLogStoreOp(
        REGHANDLE *a1,
        int a2,
        ULONGLONG a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  const EVENT_DESCRIPTOR *v8; // r10
  ULONG UserDataCount; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  UserData.Ptr = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 8LL;
  v8 = (const EVENT_DESCRIPTOR *)(&SmEtwDescriptorPtrs)[a2];
  v15 = 4LL;
  v12 = &a6;
  v14 = &a5;
  UserDataCount = 3;
  if ( a2 != 1 )
  {
    v17 = 2LL;
    v16 = &a7;
    v18 = &a8;
    UserDataCount = 5;
    v19 = 2LL;
  }
  return EtwWriteEx(*a1, v8, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
}
