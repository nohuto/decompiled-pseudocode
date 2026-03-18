/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C0218A80
 * Callers:
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C032BE20 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C032BE20, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032BE20,
        (unsigned __int8 *)dword_1C02EFDC2,
        0LL,
        0LL,
        2u,
        &v0);
  }
}
