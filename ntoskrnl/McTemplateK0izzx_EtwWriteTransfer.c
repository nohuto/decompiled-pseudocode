/*
 * XREFs of McTemplateK0izzx_EtwWriteTransfer @ 0x14055E140
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0izzx_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  const wchar_t *v4; // r8
  __int64 v6; // rax
  int v7; // r10d
  __int64 v8; // rdx
  int v9; // r9d
  bool v10; // zf
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-21h] BYREF
  va_list v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  const wchar_t *v15; // [rsp+50h] [rbp-1h]
  int v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  va_list v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  const wchar_t *v25; // [rsp+C0h] [rbp+6Fh]
  const wchar_t *v26; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  v26 = va_arg(va1, const wchar_t *);
  v3 = v25;
  v4 = v26;
  va_copy(v13, va);
  v6 = -1LL;
  v14 = 8LL;
  v7 = 10;
  if ( v25 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v25[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v16 = v9;
  v17 = 0;
  if ( !v25 )
    v3 = L"NULL";
  v15 = v3;
  v10 = v26 == 0LL;
  if ( v26 )
  {
    do
      ++v6;
    while ( v26[v6] );
    v7 = 2 * v6 + 2;
    v10 = v26 == 0LL;
  }
  if ( v10 )
    v4 = L"NULL";
  v19 = v7;
  v18 = v4;
  va_copy(v21, va1);
  v20 = 0;
  v22 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v12);
}
