__int64 __fastcall AdtpBuildLogonIdStrings(
        _DWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        UNICODE_STRING *a4,
        _BYTE *a5,
        PUNICODE_STRING DestinationString,
        _BYTE *a7)
{
  int LogonSessionAccountInfo; // eax
  unsigned int v12; // ebx

  LogonSessionAccountInfo = SepGetLogonSessionAccountInfo(a1, a4, DestinationString, a2);
  v12 = LogonSessionAccountInfo;
  if ( LogonSessionAccountInfo < 0 )
  {
    if ( *a1 != 999 || a1[1] )
    {
      if ( LogonSessionAccountInfo != -1073741729 )
        return v12;
      RtlInitUnicodeString(a4, L"-");
      RtlInitUnicodeString(DestinationString, L"-");
      *a5 = 0;
      *a7 = 0;
      if ( a2 )
      {
        *a3 = 0;
        *a2 = &AdtpNullSid;
      }
    }
    else
    {
      RtlInitUnicodeString(a4, L"SYSTEM");
      RtlInitUnicodeString(DestinationString, L"SYSTEM");
      *a5 = 0;
      *a7 = 0;
    }
    return 0;
  }
  if ( a4->Buffer )
    *a5 = 1;
  else
    RtlInitUnicodeString(a4, L"-");
  if ( DestinationString->Buffer )
    *a7 = 1;
  else
    RtlInitUnicodeString(DestinationString, L"-");
  if ( a2 && a3 )
    *a3 = 1;
  return v12;
}
