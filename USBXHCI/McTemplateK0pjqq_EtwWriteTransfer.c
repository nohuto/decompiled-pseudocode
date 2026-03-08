/*
 * XREFs of McTemplateK0pjqq_EtwWriteTransfer @ 0x1C0036C3C
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B2C0 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pjqq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  __int64 v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh]
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF
  va_list va1; // [rsp+C8h] [rbp+77h]
  va_list va2; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v7 = v15;
  v8 = 16LL;
  va_copy(v9, va1);
  va_copy(v11, va2);
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_QUERY_USB_CAPABILITY, 0LL, 5u, &v4);
}
