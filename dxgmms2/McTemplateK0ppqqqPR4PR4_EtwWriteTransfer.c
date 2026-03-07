NTSTATUS McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-69h] BYREF
  va_list v5; // [rsp+40h] [rbp-59h]
  __int64 v6; // [rsp+48h] [rbp-51h]
  va_list v7; // [rsp+50h] [rbp-49h]
  __int64 v8; // [rsp+58h] [rbp-41h]
  va_list v9; // [rsp+60h] [rbp-39h]
  __int64 v10; // [rsp+68h] [rbp-31h]
  va_list v11; // [rsp+70h] [rbp-29h]
  __int64 v12; // [rsp+78h] [rbp-21h]
  va_list v13; // [rsp+80h] [rbp-19h]
  __int64 v14; // [rsp+88h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  int v16; // [rsp+98h] [rbp-1h]
  int v17; // [rsp+9Ch] [rbp+3h]
  __int64 v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A8h] [rbp+Fh]
  int v20; // [rsp+ACh] [rbp+13h]
  __int64 v21; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v23; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v25; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v27; // [rsp+100h] [rbp+67h] BYREF
  va_list va3; // [rsp+100h] [rbp+67h]
  __int64 v29; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+108h] [rbp+6Fh]
  __int64 v31; // [rsp+110h] [rbp+77h]
  __int64 v32; // [rsp+118h] [rbp+7Fh]
  va_list va5; // [rsp+120h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  v31 = va_arg(va5, _QWORD);
  v32 = va_arg(va5, _QWORD);
  v10 = 4LL;
  v17 = 0;
  v20 = 0;
  va_copy(v5, va);
  v6 = 8LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  v15 = v31;
  v8 = 8LL;
  v12 = 4LL;
  v14 = 4LL;
  v18 = v32;
  v16 = 8 * v29;
  v19 = 8 * v29;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventSelectContext2, a3, 8u, &v4);
}
