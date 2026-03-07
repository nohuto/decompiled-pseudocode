__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[160]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  v7 = gdwPolicyFlags & 6;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)SourceString & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)SourceString, v11);
      SourceString = (PCWSTR)v11;
    }
    do
    {
      v5 = (void *)OpenCacheKeyEx(Source);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL);
        return 1LL;
      }
    }
    while ( v7 );
  }
  return 0LL;
}
