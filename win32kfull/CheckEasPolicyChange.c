/*
 * XREFs of CheckEasPolicyChange @ 0x1C01BC0B0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 CheckEasPolicyChange()
{
  unsigned int v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int64 KeyInformation; // [rsp+80h] [rbp+37h] BYREF
  __int128 v7; // [rsp+88h] [rbp+3Fh]

  v0 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\EAS\\Policies");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  KeyInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( qword_1C0362968 != KeyInformation )
  {
    qword_1C0362968 = KeyInformation;
    return 1;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  KeyInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( qword_1C0362960 != KeyInformation )
  {
    qword_1C0362960 = KeyInformation;
    return 1;
  }
  return v0;
}
