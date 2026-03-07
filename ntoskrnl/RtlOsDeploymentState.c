__int64 RtlOsDeploymentState()
{
  unsigned int v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-78h] BYREF
  UNICODE_STRING v5; // [rsp+70h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-28h] BYREF
  int v8; // [rsp+94h] [rbp-24h]
  int v9; // [rsp+98h] [rbp-20h]
  int v10; // [rsp+9Ch] [rbp-1Ch]

  KeyHandle = 0LL;
  v0 = 1;
  ResultLength = 0;
  memset(&ObjectAttributes.Length + 1, 0, 44);
  v5 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v5;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Compact");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v8 == 4
      && v9 == 4
      && v10 )
    {
      v0 = 2;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
