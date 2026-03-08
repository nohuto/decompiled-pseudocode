/*
 * XREFs of McTemplateK0qmqmq_EtwWriteTransfer @ 0x1C016619C
 * Callers:
 *     EtwTraceUiAuditReadClipboard @ 0x1C0164BA0 (EtwTraceUiAuditReadClipboard.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qmqmq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  __int64 v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  v20 = a4;
  v11 = 4LL;
  v10 = &v20;
  v12 = a5;
  v13 = 8LL;
  v14 = &a6;
  v16 = a7;
  v18 = &a8;
  v15 = 4LL;
  v17 = 8LL;
  v19 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UiAuditReadClipboard, &W32kControlGuid, 6u, &v9);
}
