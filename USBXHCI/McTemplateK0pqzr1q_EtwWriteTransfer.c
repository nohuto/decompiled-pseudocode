/*
 * XREFs of McTemplateK0pqzr1q_EtwWriteTransfer @ 0x1C004BC00
 * Callers:
 *     Etw_StartDeviceFail @ 0x1C004ACDC (Etw_StartDeviceFail.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqzr1q_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  __int64 v9; // [rsp+60h] [rbp+Fh]
  int v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+6Ch] [rbp+1Bh]
  va_list v12; // [rsp+70h] [rbp+1Fh]
  __int64 v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v16; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v18; // [rsp+C8h] [rbp+77h]
  va_list va2; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v11 = 0;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v9 = v18;
  v13 = 4LL;
  v10 = 2 * v16;
  va_copy(v12, va2);
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_STARTDEVICE_FAIL, 0LL, 5u, &v4);
}
