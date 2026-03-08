/*
 * XREFs of McTemplateK0nxqq_EtwWriteTransfer @ 0x1C0165A0C
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C003CC40 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0nxqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  int v8; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  char *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  char *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  int *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v10 = a5;
  v8 = 0;
  v12 = &a6;
  v14 = &a7;
  v16 = &v8;
  v11 = 36LL;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UIPIHandleValEvent, &W32kControlGuid, 5u, &v9);
}
