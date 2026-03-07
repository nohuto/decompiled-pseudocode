__int64 CheckShellExperienceComposerAccess()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v2) < 0 )
    return 3221225506LL;
  else
    return v2 == 0 ? 0xC0000022 : 0;
}
