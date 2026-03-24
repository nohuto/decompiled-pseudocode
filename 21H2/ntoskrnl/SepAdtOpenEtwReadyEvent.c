/*
 * XREFs of SepAdtOpenEtwReadyEvent @ 0x14079E3F4
 * Callers:
 *     SepRmCallLsa @ 0x1402C19C0 (SepRmCallLsa.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x140703CD0 (NtCreateEvent.c)
 */

__int64 __fastcall SepAdtOpenEtwReadyEvent(unsigned __int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING v3; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+48h] [rbp-30h]
  UNICODE_STRING *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int128 v9; // [rsp+60h] [rbp-18h]

  v4[1] = 0;
  v8 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&v3, L"\\ADT_ETW_CHANNEL_INIT");
  v5 = 0LL;
  v6 = &v3;
  v4[0] = 48;
  v7 = 640;
  v9 = 0LL;
  result = NtCreateEvent(a1, 1048579LL, (int)v4, NotificationEvent, 0);
  if ( (_DWORD)result == 0x40000000 || (_DWORD)result == -1073741771 )
    return 0LL;
  return result;
}
