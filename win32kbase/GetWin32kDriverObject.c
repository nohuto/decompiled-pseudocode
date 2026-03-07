__int64 __fastcall GetWin32kDriverObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  SGDGetUserSessionState(a1, a2, a3, a4);
  DestinationString = 0LL;
  if ( gbFirstConnectionDone )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  dword_1C02D1330 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  result = ObReferenceObjectByName(&DestinationString, 64LL, 0LL);
  dword_1C02D1334 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
