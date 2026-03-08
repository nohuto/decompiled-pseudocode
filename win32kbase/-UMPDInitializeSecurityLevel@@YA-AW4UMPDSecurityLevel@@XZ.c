/*
 * XREFs of ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C008B04C
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 UMPDInitializeSecurityLevel()
{
  unsigned int v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+9Ch] [rbp+43h]

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"UMPDSecurityLevel");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v8 )
    {
      if ( v8 == 1 )
      {
        v0 = 1;
      }
      else if ( v8 == 2 )
      {
        v0 = 2;
      }
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
