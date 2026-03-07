__int64 McTemplateK0qzppq_EtwWriteTransfer(_DWORD a1, _DWORD a2, _DWORD a3, int a4, const wchar_t *a5, char a6, ...)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  _BYTE v10[16]; // [rsp+30h] [rbp-39h] BYREF
  int *v11; // [rsp+40h] [rbp-29h]
  __int64 v12; // [rsp+48h] [rbp-21h]
  const wchar_t *v13; // [rsp+50h] [rbp-19h]
  int v14; // [rsp+58h] [rbp-11h]
  int v15; // [rsp+5Ch] [rbp-Dh]
  char *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  va_list v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  va_list v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+C8h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E0h] [rbp+77h]
  va_list va1; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v23 = va_arg(va1, _QWORD);
  v22 = a4;
  v6 = a5;
  v11 = &v22;
  v12 = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v17 = 8LL;
  v13 = v6;
  v16 = &a6;
  v19 = 8LL;
  va_copy(v18, va);
  v21 = 4LL;
  va_copy(v20, va1);
  return McGenEventWrite_EtwWriteTransfer(v6, &AuditApiSetWindowsHookEx, &W32kControlGuid, 6LL, v10);
}
