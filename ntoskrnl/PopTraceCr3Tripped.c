/*
 * XREFs of PopTraceCr3Tripped @ 0x140592EF4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopTraceCr3Tripped()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)word_14002EFC2, 0LL, 0LL, 3u, &v2);
    }
  }
}
