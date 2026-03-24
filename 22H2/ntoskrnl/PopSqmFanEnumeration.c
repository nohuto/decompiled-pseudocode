/*
 * XREFs of PopSqmFanEnumeration @ 0x1407CAD58
 * Callers:
 *     PopFanAdd @ 0x1407CACF0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140A6D67C (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)byte_14002A930, 0LL, 0LL, 2u, &v0);
  }
}
