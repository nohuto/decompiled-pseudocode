bool __fastcall CmpQueryHiveRedirectionFileList(PUNICODE_STRING ValueName, PUNICODE_STRING Destination)
{
  bool result; // al
  NTSTATUS v5; // eax
  bool v6; // zf
  NTSTATUS v7; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[250]; // [rsp+9Ch] [rbp-64h] BYREF

  result = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( CmStateSeparationEnabled )
  {
    ResultLength = 512;
    if ( !CmpHiveRedirectionFileListHandle )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\registry\\machine\\system\\currentcontrolset\\control\\hiveredirectionlist");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      v5 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
      v6 = v5 == 0;
      if ( v5 < 0 )
        return v6;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&CmpHiveRedirectionFileListHandle,
             (signed __int64)KeyHandle,
             0LL) )
      {
        ZwClose(KeyHandle);
      }
    }
    v7 = ZwQueryValueKey(
           CmpHiveRedirectionFileListHandle,
           ValueName,
           KeyValuePartialInformation,
           KeyValueInformation,
           ResultLength,
           &ResultLength);
    v6 = v7 == 0;
    if ( v7 >= 0 )
      return RtlAppendUnicodeToString(Destination, Source) == 0;
    return v6;
  }
  return result;
}
