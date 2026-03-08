/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C000174C
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0077368 (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0077680 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0001680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1u, &v4);
}
