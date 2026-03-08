/*
 * XREFs of McTemplateK0pt_EtwWriteTransfer @ 0x1C003701C
 * Callers:
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0032530 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0034540 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pt_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwWriteTransfer(
           a1,
           &USBXHCI_ETW_EVENT_CONTROLLER_WDF_POWER_REFERENCE_FOR_DEBUGGER,
           0LL,
           3u,
           &v4);
}
