NTSTATUS McTemplateK0puuhz_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-39h] BYREF
  va_list v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  va_list v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  va_list v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  va_list v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  const wchar_t *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 v19; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  __int64 v25; // [rsp+E0h] [rbp+77h] BYREF
  va_list va3; // [rsp+E0h] [rbp+77h]
  const wchar_t *v27; // [rsp+E8h] [rbp+7Fh]
  va_list va4; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, const wchar_t *);
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  va_copy(v14, va3);
  v11 = 1LL;
  v13 = 1LL;
  v15 = 2LL;
  if ( v27 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v27[v3] );
    v4 = (unsigned int)(2 * v3 + 2);
  }
  else
  {
    v4 = 10LL;
  }
  v18 = 0;
  v5 = L"NULL";
  v17 = v4;
  if ( v27 )
    v5 = v27;
  v16 = v5;
  return McGenEventWrite_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_BILLBOARD, a3, 6u, &v7);
}
