unsigned __int8 DoesLowBoxAppHaveOutputDuplCapability(void)
{
  char v0; // bl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"screenDuplication");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v3) >= 0 )
    return v3;
  return v0;
}
