/*
 * XREFs of McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C004B00C
 * Callers:
 *     Etw_EndpointCreate @ 0x1C000B79C (Etw_EndpointCreate.c)
 *     Etw_EndpointListRundown @ 0x1C0010060 (Etw_EndpointListRundown.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C001B8D0 (Endpoint_EvaluateContextCompletion.c)
 *     Etw_EndpointDelete @ 0x1C004AC80 (Etw_EndpointDelete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pppnnn_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-59h]
  __int64 v8; // [rsp+48h] [rbp-51h]
  char *v9; // [rsp+50h] [rbp-49h]
  __int64 v10; // [rsp+58h] [rbp-41h]
  va_list v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  __int64 v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  __int64 v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  __int64 v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int64 v19; // [rsp+D8h] [rbp+3Fh] BYREF
  __int64 v20; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v22; // [rsp+F0h] [rbp+57h]
  __int64 v23; // [rsp+F8h] [rbp+5Fh]
  __int64 v24; // [rsp+100h] [rbp+67h]
  __int64 v25; // [rsp+108h] [rbp+6Fh]
  __int64 v26; // [rsp+110h] [rbp+77h]
  __int64 v27; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v19 = a4;
  v8 = 8LL;
  v7 = &v19;
  v10 = 8LL;
  v9 = &a5;
  va_copy(v11, va);
  v13 = v23;
  v15 = v25;
  v17 = v27;
  v12 = 8LL;
  v14 = 7LL;
  v16 = 6LL;
  v18 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 7u, &v6);
}
