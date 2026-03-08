/*
 * XREFs of McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0014388
 * Callers:
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0033F70 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x1C0034010 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 *     HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C00340B0 (HUBMISC_LogDescriptorValidationErrorForHub.c)
 *     HUBMISC_LogDescriptorValidationWarningForHub @ 0x1C0034100 (HUBMISC_LogDescriptorValidationWarningForHub.c)
 *     FWUPDATE_EvtDeviceD0Entry @ 0x1C003FC60 (FWUPDATE_EvtDeviceD0Entry.c)
 *     FWUPDATE_EvtDeviceD0Exit @ 0x1C003FD10 (FWUPDATE_EvtDeviceD0Exit.c)
 *     FWUPDATE_EvtIoInternalDeviceControl @ 0x1C003FFE0 (FWUPDATE_EvtIoInternalDeviceControl.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  va_copy(v11, va3);
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 5u, &v4);
}
