int DCEInUseCountTelemetryInit()
{
  int result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v6; // [rsp+84h] [rbp-7Ch]
  unsigned int v7; // [rsp+8Ch] [rbp-74h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"GlobalDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4
      && v7
      && v7 > ulGlobalThresholdDCEInUse )
    {
      ulGlobalThresholdDCEInUse = v7;
    }
    RtlInitUnicodeString(&DestinationString, L"ProcessDCEsInUseThreshold");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4
      && v7
      && v7 > ulProcessThresholdDCEInUse )
    {
      ulProcessThresholdDCEInUse = v7;
    }
    RtlInitUnicodeString(&DestinationString, L"EventIntervalMinute");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4
      && v7
      && v7 > llEventIntervalMinute )
    {
      llEventIntervalMinute = v7;
    }
    RtlInitUnicodeString(&DestinationString, L"DCEInUseTelemetryDisabled");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4 )
    {
      if ( v7 )
        bDCEInUseTelemetryDisabled = 1;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
