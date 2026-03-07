NTSTATUS McTemplateK0xqdtq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-39h] BYREF
  va_list v6; // [rsp+50h] [rbp-29h]
  __int64 v7; // [rsp+58h] [rbp-21h]
  va_list v8; // [rsp+60h] [rbp-19h]
  __int64 v9; // [rsp+68h] [rbp-11h]
  va_list v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  int *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  va_list v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  __int64 v16; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+5Fh]
  __int64 v18; // [rsp+E0h] [rbp+67h] BYREF
  va_list va1; // [rsp+E0h] [rbp+67h]
  __int64 v20; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+6Fh]
  __int64 v22; // [rsp+F0h] [rbp+77h]
  va_list va3; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v22 = va_arg(va3, _QWORD);
  v7 = 8LL;
  v4 = 0;
  va_copy(v6, va);
  v9 = 4LL;
  va_copy(v8, va1);
  v11 = 4LL;
  va_copy(v10, va2);
  v13 = 4LL;
  v12 = &v4;
  va_copy(v14, va3);
  v15 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventBltQueueAddEntry, a3, 6u, &v5);
}
