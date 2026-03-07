NTSTATUS __fastcall PopSaveLidReliabilityState(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = PopOpenPersistedRegistryKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LidReliabilityState");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopLidStateIsReliable, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
