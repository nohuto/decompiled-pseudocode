/*
 * XREFs of PopSqmFanEnumeration @ 0x140853F68
 * Callers:
 *     PopFanAdd @ 0x140853EE0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140B68010 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14003259D, 0LL, 0LL, 2u, &v0);
  }
}
