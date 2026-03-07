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
