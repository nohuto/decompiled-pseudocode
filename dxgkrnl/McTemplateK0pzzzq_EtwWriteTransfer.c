/*
 * XREFs of McTemplateK0pzzzq_EtwWriteTransfer @ 0x1C0046734
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C911C (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzzq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // r8
  const wchar_t *v4; // r11
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-49h] BYREF
  va_list v16; // [rsp+40h] [rbp-39h]
  __int64 v17; // [rsp+48h] [rbp-31h]
  const wchar_t *v18; // [rsp+50h] [rbp-29h]
  int v19; // [rsp+58h] [rbp-21h]
  int v20; // [rsp+5Ch] [rbp-1Dh]
  const wchar_t *v21; // [rsp+60h] [rbp-19h]
  int v22; // [rsp+68h] [rbp-11h]
  int v23; // [rsp+6Ch] [rbp-Dh]
  const wchar_t *v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  va_list v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]
  __int64 v29; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+5Fh]
  const wchar_t *v31; // [rsp+E0h] [rbp+67h]
  const wchar_t *v32; // [rsp+E8h] [rbp+6Fh]
  const wchar_t *v33; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, const wchar_t *);
  v32 = va_arg(va1, const wchar_t *);
  v33 = va_arg(va1, const wchar_t *);
  v3 = v31;
  v4 = v33;
  va_copy(v16, va);
  v6 = v32;
  v7 = -1LL;
  v17 = 8LL;
  v8 = 10;
  if ( v31 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v31[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  v20 = 0;
  if ( !v31 )
    v3 = L"NULL";
  v18 = v3;
  if ( v32 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v32[v11] );
    v12 = (unsigned int)(2 * v11 + 2);
  }
  else
  {
    v12 = 10LL;
  }
  v22 = v12;
  v23 = 0;
  if ( !v32 )
    v6 = L"NULL";
  v21 = v6;
  v13 = v33 == 0LL;
  if ( v33 )
  {
    do
      ++v7;
    while ( v33[v7] );
    v8 = 2 * v7 + 2;
    v13 = v33 == 0LL;
  }
  v25 = v8;
  va_copy(v27, va1);
  v26 = 0;
  if ( v13 )
    v4 = L"NULL";
  v24 = v4;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, v12, 6u, &v15);
}
