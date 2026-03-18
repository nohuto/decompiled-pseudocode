/*
 * XREFs of PopSqmFanEnumeration @ 0x1409A01C0
 * Callers:
 *     PopFanAdd @ 0x140999060 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140B30800 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03A00, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140032725, 0LL, 0LL, 2u, &v0);
  }
}
