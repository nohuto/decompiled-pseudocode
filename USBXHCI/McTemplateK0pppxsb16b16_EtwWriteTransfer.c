/*
 * XREFs of McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C0036CD8
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pppxsb16b16_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const char *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-69h] BYREF
  va_list v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+48h] [rbp-51h]
  va_list v10; // [rsp+50h] [rbp-49h]
  __int64 v11; // [rsp+58h] [rbp-41h]
  va_list v12; // [rsp+60h] [rbp-39h]
  __int64 v13; // [rsp+68h] [rbp-31h]
  va_list v14; // [rsp+70h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-21h]
  const char *v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  __int64 v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  __int64 v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  __int64 v23; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v25; // [rsp+F0h] [rbp+57h] BYREF
  va_list va1; // [rsp+F0h] [rbp+57h]
  __int64 v27; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+5Fh]
  __int64 v29; // [rsp+100h] [rbp+67h] BYREF
  va_list va3; // [rsp+100h] [rbp+67h]
  const char *v31; // [rsp+108h] [rbp+6Fh]
  __int64 v32; // [rsp+110h] [rbp+77h]
  __int64 v33; // [rsp+118h] [rbp+7Fh]
  va_list va4; // [rsp+120h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  v31 = va_arg(va4, const char *);
  v32 = va_arg(va4, _QWORD);
  v33 = va_arg(va4, _QWORD);
  v3 = v31;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  v11 = 8LL;
  va_copy(v12, va2);
  va_copy(v14, va3);
  v13 = 8LL;
  v15 = 8LL;
  if ( v31 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v31[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5;
  }
  v17 = v5;
  v19 = v32;
  if ( !v31 )
    v3 = "NULL";
  v21 = v33;
  v16 = v3;
  v18 = 0;
  v20 = 16LL;
  v22 = 16LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v3, &USBXHCI_ETW_EVENT_CONTROLLER_ERROR, 0LL, 8u, &v7);
}
