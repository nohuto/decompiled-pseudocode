/*
 * XREFs of McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x1C00401AC
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqqjzqqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-B1h] BYREF
  va_list v8; // [rsp+40h] [rbp-A1h]
  __int64 v9; // [rsp+48h] [rbp-99h]
  va_list v10; // [rsp+50h] [rbp-91h]
  __int64 v11; // [rsp+58h] [rbp-89h]
  va_list v12; // [rsp+60h] [rbp-81h]
  __int64 v13; // [rsp+68h] [rbp-79h]
  va_list v14; // [rsp+70h] [rbp-71h]
  __int64 v15; // [rsp+78h] [rbp-69h]
  va_list v16; // [rsp+80h] [rbp-61h]
  __int64 v17; // [rsp+88h] [rbp-59h]
  __int64 v18; // [rsp+90h] [rbp-51h]
  __int64 v19; // [rsp+98h] [rbp-49h]
  const wchar_t *v20; // [rsp+A0h] [rbp-41h]
  int v21; // [rsp+A8h] [rbp-39h]
  int v22; // [rsp+ACh] [rbp-35h]
  va_list v23; // [rsp+B0h] [rbp-31h]
  __int64 v24; // [rsp+B8h] [rbp-29h]
  va_list v25; // [rsp+C0h] [rbp-21h]
  __int64 v26; // [rsp+C8h] [rbp-19h]
  va_list v27; // [rsp+D0h] [rbp-11h]
  __int64 v28; // [rsp+D8h] [rbp-9h]
  __int64 v29; // [rsp+118h] [rbp+37h] BYREF
  va_list va; // [rsp+118h] [rbp+37h]
  __int64 v31; // [rsp+120h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+3Fh]
  __int64 v33; // [rsp+128h] [rbp+47h] BYREF
  va_list va2; // [rsp+128h] [rbp+47h]
  __int64 v35; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+130h] [rbp+4Fh]
  __int64 v37; // [rsp+138h] [rbp+57h] BYREF
  va_list va4; // [rsp+138h] [rbp+57h]
  __int64 v39; // [rsp+140h] [rbp+5Fh]
  const wchar_t *v40; // [rsp+148h] [rbp+67h]
  __int64 v41; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+150h] [rbp+6Fh]
  __int64 v43; // [rsp+158h] [rbp+77h] BYREF
  va_list va6; // [rsp+158h] [rbp+77h]
  va_list va7; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v37 = va_arg(va5, _QWORD);
  v39 = va_arg(va5, _QWORD);
  v40 = va_arg(va5, const wchar_t *);
  va_copy(va6, va5);
  v41 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v43 = va_arg(va7, _QWORD);
  v3 = v40;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v39;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 16LL;
  if ( v40 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v40[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v21 = v5;
  v22 = 0;
  if ( !v40 )
    v3 = L"NULL";
  v24 = 4LL;
  v20 = v3;
  va_copy(v23, va5);
  v26 = 4LL;
  va_copy(v25, va6);
  v28 = 8LL;
  va_copy(v27, va7);
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &Dxgk_PowerComponent, 0LL, 0xBu, &v7);
}
