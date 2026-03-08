/*
 * XREFs of McTemplateK0cdqq_EtwWriteTransfer @ 0x1C00EDF94
 * Callers:
 *     EtwTraceBeginAppMessageProcessing @ 0x1C00A5760 (EtwTraceBeginAppMessageProcessing.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cdqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  char v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 1LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  v16 = 4LL;
  v15 = &a7;
  return McGenEventWrite_EtwWriteTransfer(a1, &BeginAppMessageProcessing, &W32kControlGuid, 5u, &v8);
}
