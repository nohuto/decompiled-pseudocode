/*
 * XREFs of McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C00EF3C2
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x1C00AAD00 (EtwTraceLifetimeAccum.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1C00D3540 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceMoveRegion @ 0x1C01983F0 (EtwTraceMoveRegion.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqnqNR3_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-39h]
  __int64 v7; // [rsp+48h] [rbp-31h]
  va_list v8; // [rsp+50h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-21h]
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  va_list v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 v17; // [rsp+C8h] [rbp+4Fh] BYREF
  __int64 v18; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v20; // [rsp+D8h] [rbp+5Fh]
  __int64 v21; // [rsp+E0h] [rbp+67h]
  __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+6Fh]
  __int64 v24; // [rsp+F0h] [rbp+77h]
  __int64 v25; // [rsp+F8h] [rbp+7Fh]
  va_list va2; // [rsp+100h] [rbp+87h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  v17 = a4;
  v7 = 8LL;
  v16 = 0;
  v6 = &v17;
  va_copy(v8, va);
  v10 = v21;
  v9 = 4LL;
  va_copy(v12, va1);
  v14 = v25;
  v15 = 16 * v22;
  v11 = 16LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 6u, &v5);
}
