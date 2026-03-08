/*
 * XREFs of McTemplateK0pqqttp_EtwWriteTransfer @ 0x1C0038F48
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqttp_EtwWriteTransfer(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4, char a5, char a6, ...)
{
  int v7; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-51h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-41h]
  __int64 v10; // [rsp+58h] [rbp-39h]
  char *v11; // [rsp+60h] [rbp-31h]
  __int64 v12; // [rsp+68h] [rbp-29h]
  char *v13; // [rsp+70h] [rbp-21h]
  __int64 v14; // [rsp+78h] [rbp-19h]
  va_list v15; // [rsp+80h] [rbp-11h]
  __int64 v16; // [rsp+88h] [rbp-9h]
  int *v17; // [rsp+90h] [rbp-1h]
  __int64 v18; // [rsp+98h] [rbp+7h]
  va_list v19; // [rsp+A0h] [rbp+Fh]
  __int64 v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v22; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v24; // [rsp+108h] [rbp+77h]
  va_list va1; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v21 = a4;
  v10 = 8LL;
  v7 = 0;
  v9 = &v21;
  v12 = 4LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  v16 = 4LL;
  va_copy(v15, va);
  v17 = &v7;
  va_copy(v19, va1);
  v18 = 4LL;
  v20 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventQueueComplete, 0LL, 7u, &v8);
}
