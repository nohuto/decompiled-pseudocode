int BapdRemoveWbclData()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = BapdGetISRegistryKey(&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WBCL");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLDrtm");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLTrustpoint");
    result = ZwDeleteValueKey(KeyHandle, &DestinationString);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
