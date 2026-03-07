__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(String1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      return i;
  }
  return 0LL;
}
