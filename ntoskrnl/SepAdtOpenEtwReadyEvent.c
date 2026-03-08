/*
 * XREFs of SepAdtOpenEtwReadyEvent @ 0x1408414C0
 * Callers:
 *     SepRmCallLsa @ 0x1402E8690 (SepRmCallLsa.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B615C0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 */

__int64 __fastcall SepAdtOpenEtwReadyEvent(unsigned __int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v4[3]; // [rsp+40h] [rbp-30h] BYREF
  int v5; // [rsp+58h] [rbp-18h]
  int v6; // [rsp+5Ch] [rbp-14h]
  __int128 v7; // [rsp+60h] [rbp-10h]

  v6 = 0;
  v4[0] = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ADT_ETW_CHANNEL_INIT");
  v4[1] = 0LL;
  v4[2] = &DestinationString;
  v5 = 640;
  v7 = 0LL;
  result = NtCreateEvent(a1, 0x100003u, (int)v4, NotificationEvent, 0);
  if ( (_DWORD)result == 0x40000000 || (_DWORD)result == -1073741771 )
    return 0LL;
  return result;
}
