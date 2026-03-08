/*
 * XREFs of WmipGetRegistryHideMachine @ 0x140725BEC
 * Callers:
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool WmipGetRegistryHideMachine()
{
  int v0; // edi
  _DWORD *Pool2; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  ResultLength = 0;
  v0 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HideMachine");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1885957463LL);
      if ( Pool2 )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               Pool2,
               ResultLength,
               &ResultLength) >= 0
          && Pool2[1] == 4
          && Pool2[2] == 4 )
        {
          v0 = Pool2[3];
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0 != 0;
}
