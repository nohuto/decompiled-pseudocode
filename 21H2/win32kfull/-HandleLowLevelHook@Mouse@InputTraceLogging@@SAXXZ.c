/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C021DA40
 * Callers:
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x40) != 0 && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0330B20, (unsigned __int8 *)dword_1C02F2F4C, 0LL, 0LL, 2u, &v0);
}
