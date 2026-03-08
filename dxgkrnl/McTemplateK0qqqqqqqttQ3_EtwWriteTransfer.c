/*
 * XREFs of McTemplateK0qqqqqqqttQ3_EtwWriteTransfer @ 0x1C0047608
 * Callers:
 *     ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C0166990 (-DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-B1h] BYREF
  int *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  char *v17; // [rsp+50h] [rbp-91h]
  __int64 v18; // [rsp+58h] [rbp-89h]
  char *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  char *v21; // [rsp+70h] [rbp-71h]
  __int64 v22; // [rsp+78h] [rbp-69h]
  char *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  char *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  char *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  char *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  char *v31; // [rsp+C0h] [rbp-21h]
  __int64 v32; // [rsp+C8h] [rbp-19h]
  __int64 v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  int v35; // [rsp+118h] [rbp+37h] BYREF

  v35 = a4;
  v16 = 4LL;
  v15 = &v35;
  v18 = 4LL;
  v17 = &a5;
  v20 = 4LL;
  v19 = &a6;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v33 = a13;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 12LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 0xBu, &v14);
}
