/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C004AE00
 * Callers:
 *     Etw_EnableCallback @ 0x1C001C8E0 (Etw_EnableCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1u, &v4);
}
