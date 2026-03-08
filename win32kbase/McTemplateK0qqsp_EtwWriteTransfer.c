/*
 * XREFs of McTemplateK0qqsp_EtwWriteTransfer @ 0x1C0167244
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C00A3AD0 (EtwTraceQueueMessage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqsp_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const char *a6,
        char a7)
{
  const char *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-21h] BYREF
  int *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  char *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  const char *v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+6Ch] [rbp+1Bh]
  char *v19; // [rsp+70h] [rbp+1Fh]
  __int64 v20; // [rsp+78h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+67h] BYREF

  v21 = a4;
  v7 = a6;
  v12 = &v21;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v17 = v9;
  v18 = 0;
  v19 = &a7;
  v20 = 8LL;
  if ( !a6 )
    v7 = "NULL";
  v16 = v7;
  return McGenEventWrite_EtwWriteTransfer((__int64)v7, &QueueNullPostMessage, &W32kControlGuid, 5u, &v11);
}
