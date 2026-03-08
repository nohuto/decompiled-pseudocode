/*
 * XREFs of McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001790
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C007685C (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pnq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h]
  __int64 v15; // [rsp+B8h] [rbp+38h]
  va_list va1; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v6 = 8LL;
  v9 = 0;
  va_copy(v5, va);
  v7 = v15;
  v8 = v14;
  va_copy(v10, va1);
  v11 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(0LL, a2, a3, 4u, &v4);
}
