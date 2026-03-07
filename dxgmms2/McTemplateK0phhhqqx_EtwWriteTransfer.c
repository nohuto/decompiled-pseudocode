NTSTATUS McTemplateK0phhhqqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int16 v4; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-69h] BYREF
  va_list v6; // [rsp+50h] [rbp-59h]
  __int64 v7; // [rsp+58h] [rbp-51h]
  va_list v8; // [rsp+60h] [rbp-49h]
  __int64 v9; // [rsp+68h] [rbp-41h]
  va_list v10; // [rsp+70h] [rbp-39h]
  __int64 v11; // [rsp+78h] [rbp-31h]
  __int16 *v12; // [rsp+80h] [rbp-29h]
  __int64 v13; // [rsp+88h] [rbp-21h]
  va_list v14; // [rsp+90h] [rbp-19h]
  __int64 v15; // [rsp+98h] [rbp-11h]
  va_list v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  va_list v18; // [rsp+B0h] [rbp+7h]
  __int64 v19; // [rsp+B8h] [rbp+Fh]
  __int64 v20; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+4Fh]
  __int64 v22; // [rsp+100h] [rbp+57h] BYREF
  va_list va1; // [rsp+100h] [rbp+57h]
  __int64 v24; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+5Fh]
  __int64 v26; // [rsp+110h] [rbp+67h]
  __int64 v27; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+118h] [rbp+6Fh]
  __int64 v29; // [rsp+120h] [rbp+77h] BYREF
  va_list va4; // [rsp+120h] [rbp+77h]
  va_list va5; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  v9 = 2LL;
  v4 = 0;
  va_copy(v6, va);
  v11 = 2LL;
  va_copy(v8, va1);
  v7 = 8LL;
  va_copy(v10, va2);
  v13 = 2LL;
  v12 = &v4;
  va_copy(v14, va3);
  va_copy(v16, va4);
  va_copy(v18, va5);
  v15 = 4LL;
  v17 = 4LL;
  v19 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVidMmVprDefragmentLowCommit, a3, 8u, &v5);
}
