NTSTATUS McTemplateK0pxqPR2XR2_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-39h] BYREF
  va_list v5; // [rsp+40h] [rbp-29h]
  __int64 v6; // [rsp+48h] [rbp-21h]
  va_list v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+58h] [rbp-11h]
  va_list v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  __int64 v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  __int64 v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  __int64 v17; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v21; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  __int64 v23; // [rsp+E0h] [rbp+77h]
  __int64 v24; // [rsp+E8h] [rbp+7Fh]
  va_list va3; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  v23 = va_arg(va3, _QWORD);
  v24 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v13 = 0;
  va_copy(v5, va);
  va_copy(v7, va1);
  va_copy(v9, va2);
  v11 = v23;
  v16 = 0;
  v8 = 8LL;
  v10 = 4LL;
  v14 = v24;
  v12 = 8 * v21;
  v15 = 8 * v21;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventCreateSyncPoint, a3, 6u, &v4);
}
