/*
 * XREFs of McTemplateK0qzppq_EtwWriteTransfer @ 0x1C0055408
 * Callers:
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C01214D0 (EtwTraceAuditApiSetWindowsHookEx.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00554F0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qzppq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _BYTE v12[16]; // [rsp+30h] [rbp-39h] BYREF
  int *v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-21h]
  const wchar_t *v15; // [rsp+50h] [rbp-19h]
  int v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+5Ch] [rbp-Dh]
  char *v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  char *v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  char *v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+C8h] [rbp+5Fh] BYREF

  v24 = a4;
  v8 = a5;
  v13 = &v24;
  v14 = 4LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v16 = v10;
  v17 = 0;
  if ( !a5 )
    v8 = L"NULL";
  v19 = 8LL;
  v15 = v8;
  v18 = &a6;
  v21 = 8LL;
  v20 = &a7;
  v23 = 4LL;
  v22 = &a8;
  return McGenEventWrite_EtwWriteTransfer(v8, &AuditApiSetWindowsHookEx, &W32kControlGuid, 6LL, v12);
}
