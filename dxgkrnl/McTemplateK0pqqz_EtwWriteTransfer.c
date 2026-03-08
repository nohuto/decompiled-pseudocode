/*
 * XREFs of McTemplateK0pqqz_EtwWriteTransfer @ 0x1C0040564
 * Callers:
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C020CA04 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqz_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-21h] BYREF
  va_list v8; // [rsp+40h] [rbp-11h]
  __int64 v9; // [rsp+48h] [rbp-9h]
  va_list v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  va_list v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h]
  const wchar_t *v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+7Ch] [rbp+2Bh]
  __int64 v17; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v19; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v21; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  const wchar_t *v23; // [rsp+D0h] [rbp+7Fh]
  va_list va3; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  v23 = va_arg(va3, const wchar_t *);
  v3 = v23;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  v11 = 4LL;
  v13 = 4LL;
  if ( v23 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v23[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v15 = v5;
  v16 = 0;
  if ( !v23 )
    v3 = L"NULL";
  v14 = v3;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventNodeMetadata, 0LL, 5u, &v7);
}
