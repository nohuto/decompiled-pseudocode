/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C01496B6
 * Callers:
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C035C080,
        (unsigned __int8 *)dword_1C031D979,
        0LL,
        0LL,
        2u,
        &v0);
  }
}
