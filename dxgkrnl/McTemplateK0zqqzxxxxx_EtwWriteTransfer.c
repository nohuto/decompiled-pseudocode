NTSTATUS McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        const wchar_t *a4,
        char a5,
        char a6,
        const wchar_t *a7,
        ...)
{
  const wchar_t *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-89h]
  int v15; // [rsp+48h] [rbp-81h]
  int v16; // [rsp+4Ch] [rbp-7Dh]
  char *v17; // [rsp+50h] [rbp-79h]
  __int64 v18; // [rsp+58h] [rbp-71h]
  char *v19; // [rsp+60h] [rbp-69h]
  __int64 v20; // [rsp+68h] [rbp-61h]
  const wchar_t *v21; // [rsp+70h] [rbp-59h]
  int v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+7Ch] [rbp-4Dh]
  va_list v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  va_list v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  va_list v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  va_list v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  va_list v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  __int64 v34; // [rsp+128h] [rbp+5Fh] BYREF
  va_list va; // [rsp+128h] [rbp+5Fh]
  __int64 v36; // [rsp+130h] [rbp+67h] BYREF
  va_list va1; // [rsp+130h] [rbp+67h]
  __int64 v38; // [rsp+138h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+138h] [rbp+6Fh]
  __int64 v40; // [rsp+140h] [rbp+77h] BYREF
  va_list va3; // [rsp+140h] [rbp+77h]
  va_list va4; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va4, a7);
  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v34 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v36 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v38 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v40 = va_arg(va4, _QWORD);
  v7 = a7;
  v8 = -1LL;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = (unsigned int)(2 * v9 + 2);
  }
  else
  {
    v10 = 10LL;
  }
  v15 = v10;
  v16 = 0;
  v17 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 4LL;
  v14 = a4;
  v19 = &a6;
  v20 = 4LL;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v11 = 2 * v8 + 2;
  }
  else
  {
    v11 = 10;
  }
  v22 = v11;
  v23 = 0;
  va_copy(v24, va);
  if ( !a7 )
    v7 = L"NULL";
  v25 = 8LL;
  v21 = v7;
  va_copy(v26, va1);
  v27 = 8LL;
  va_copy(v28, va2);
  v29 = 8LL;
  va_copy(v30, va3);
  va_copy(v32, va4);
  v31 = 8LL;
  v33 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &ReportTriageEvent, v10, 0xAu, &v13);
}
