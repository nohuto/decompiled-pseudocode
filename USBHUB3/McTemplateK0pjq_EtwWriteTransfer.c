/*
 * XREFs of McTemplateK0pjq_EtwWriteTransfer @ 0x1C0014284
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pjq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h]
  va_list va1; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v7 = v13;
  va_copy(v9, va1);
  v8 = 16LL;
  v10 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_DEVICE_QUERY_USB_CAPABILITY, a3, 4u, &v4);
}
