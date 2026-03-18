/*
 * XREFs of ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C0056FAC
 * Callers:
 *     RIMInitialize @ 0x1C0056920 (RIMInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void vInitRIMPnpThreadDelayBugCheckConfig(void)
{
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v5; // [rsp+84h] [rbp-7Ch]
  int v6; // [rsp+8Ch] [rbp-74h]

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
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"EnableRIMPnpThreadDelayBugcheck");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      if ( v6 )
        gbBugCheckOnPnpThreadDelay = 1;
    }
    ZwClose(KeyHandle);
  }
}
