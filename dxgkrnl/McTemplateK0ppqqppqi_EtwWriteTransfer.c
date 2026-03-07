NTSTATUS McTemplateK0ppqqppqi_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-81h] BYREF
  va_list v6; // [rsp+50h] [rbp-71h]
  __int64 v7; // [rsp+58h] [rbp-69h]
  va_list v8; // [rsp+60h] [rbp-61h]
  __int64 v9; // [rsp+68h] [rbp-59h]
  int *v10; // [rsp+70h] [rbp-51h]
  __int64 v11; // [rsp+78h] [rbp-49h]
  va_list v12; // [rsp+80h] [rbp-41h]
  __int64 v13; // [rsp+88h] [rbp-39h]
  va_list v14; // [rsp+90h] [rbp-31h]
  __int64 v15; // [rsp+98h] [rbp-29h]
  va_list v16; // [rsp+A0h] [rbp-21h]
  __int64 v17; // [rsp+A8h] [rbp-19h]
  va_list v18; // [rsp+B0h] [rbp-11h]
  __int64 v19; // [rsp+B8h] [rbp-9h]
  va_list v20; // [rsp+C0h] [rbp-1h]
  __int64 v21; // [rsp+C8h] [rbp+7h]
  __int64 v22; // [rsp+108h] [rbp+47h] BYREF
  va_list va; // [rsp+108h] [rbp+47h]
  __int64 v24; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+4Fh]
  __int64 v26; // [rsp+118h] [rbp+57h]
  __int64 v27; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  __int64 v29; // [rsp+128h] [rbp+67h] BYREF
  va_list va3; // [rsp+128h] [rbp+67h]
  __int64 v31; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+130h] [rbp+6Fh]
  __int64 v33; // [rsp+138h] [rbp+77h] BYREF
  va_list va5; // [rsp+138h] [rbp+77h]
  va_list va6; // [rsp+140h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, _QWORD);
  v7 = 8LL;
  v4 = 4;
  va_copy(v6, va);
  v9 = 8LL;
  va_copy(v8, va1);
  v11 = 4LL;
  v10 = &v4;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  va_copy(v18, va5);
  va_copy(v20, va6);
  v13 = 4LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 4LL;
  v21 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, 4LL, 9u, &v5);
}
