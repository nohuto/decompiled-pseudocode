/*
 * XREFs of McTemplateK0ndcdxx_EtwWriteTransfer @ 0x1C01656C4
 * Callers:
 *     EtwTraceUIPIHookError @ 0x1C0164A70 (EtwTraceUIPIHookError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ndcdxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h]
  __int64 v13; // [rsp+48h] [rbp-41h]
  char *v14; // [rsp+50h] [rbp-39h]
  __int64 v15; // [rsp+58h] [rbp-31h]
  char *v16; // [rsp+60h] [rbp-29h]
  __int64 v17; // [rsp+68h] [rbp-21h]
  char *v18; // [rsp+70h] [rbp-19h]
  __int64 v19; // [rsp+78h] [rbp-11h]
  char *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  char *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]

  v12 = a5;
  v13 = 36LL;
  v14 = &a6;
  v15 = 4LL;
  v16 = &a7;
  v18 = &a8;
  v20 = &a9;
  v22 = &a10;
  v17 = 1LL;
  v19 = 4LL;
  v21 = 8LL;
  v23 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UIPIHookEvent, &W32kControlGuid, 7u, &v11);
}
