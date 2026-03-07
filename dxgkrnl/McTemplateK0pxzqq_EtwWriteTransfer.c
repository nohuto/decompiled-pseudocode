NTSTATUS McTemplateK0pxzqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-39h] BYREF
  va_list v9; // [rsp+40h] [rbp-29h]
  __int64 v10; // [rsp+48h] [rbp-21h]
  va_list v11; // [rsp+50h] [rbp-19h]
  __int64 v12; // [rsp+58h] [rbp-11h]
  const wchar_t *v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+6Ch] [rbp+3h]
  va_list v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  va_list v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v22; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  const wchar_t *v24; // [rsp+D8h] [rbp+6Fh]
  __int64 v25; // [rsp+E0h] [rbp+77h] BYREF
  va_list va2; // [rsp+E0h] [rbp+77h]
  va_list va3; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, const wchar_t *);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v3 = v24;
  va_copy(v9, va);
  v10 = 8LL;
  va_copy(v11, va1);
  v12 = 8LL;
  if ( v24 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v24[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v14 = v6;
  v15 = 0;
  if ( !v24 )
    v3 = L"NULL";
  v17 = 4LL;
  v13 = v3;
  va_copy(v16, va2);
  v19 = 4LL;
  va_copy(v18, va3);
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)a2, 6u, &v8);
}
