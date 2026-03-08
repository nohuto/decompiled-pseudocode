/*
 * XREFs of McTemplateK0qqbr1pqqp_EtwWriteTransfer @ 0x1C0065E2C
 * Callers:
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0201770 (DpiDxgkDdiQueryDeviceDescriptor.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqbr1pqqp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  int *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  __int64 v16; // [rsp+60h] [rbp-39h]
  int v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+6Ch] [rbp-2Dh]
  char *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  char *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  char *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  char *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+E8h] [rbp+4Fh] BYREF

  v27 = a4;
  v13 = 4LL;
  v15 = 4LL;
  v12 = &v27;
  v18 = 0;
  v14 = &a5;
  v16 = a6;
  v17 = a5;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, 0LL, 8u, &v11);
}
