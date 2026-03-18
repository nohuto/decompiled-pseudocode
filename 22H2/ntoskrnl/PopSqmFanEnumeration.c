/*
 * XREFs of PopSqmFanEnumeration @ 0x140858198
 * Callers:
 *     PopFanAdd @ 0x140858110 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140B6BEA0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C03950 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03950, (unsigned __int8 *)byte_14003289D, 0LL, 0LL, 2u, &v0);
  }
}
