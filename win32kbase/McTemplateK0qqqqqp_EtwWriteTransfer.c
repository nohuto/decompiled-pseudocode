/*
 * XREFs of McTemplateK0qqqqqp_EtwWriteTransfer @ 0x1C0038158
 * Callers:
 *     EtwTraceAuditApiSetWinEventHook @ 0x1C0038110 (EtwTraceAuditApiSetWinEventHook.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qqqqqp_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _BYTE v10[16]; // [rsp+30h] [rbp-51h] BYREF
  int *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  char *v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+D8h] [rbp+57h] BYREF

  v23 = a4;
  v12 = 4LL;
  v11 = &v23;
  v14 = 4LL;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v18 = 4LL;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v20 = 4LL;
  v22 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &AuditApiSetWinEventHook, &W32kControlGuid, 7LL, v10);
}
