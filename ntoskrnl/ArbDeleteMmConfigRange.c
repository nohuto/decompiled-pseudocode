/*
 * XREFs of ArbDeleteMmConfigRange @ 0x140B66F9C
 * Callers:
 *     HalpPciReportMmConfigAddressRange @ 0x140B66ED8 (HalpPciReportMmConfigAddressRange.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 */

NTSTATUS ArbDeleteMmConfigRange()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &ValueName;
  *(_DWORD *)&ValueName.Length = 7733366;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 2228258;
    ValueName.Buffer = L"ReservedResources";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v1 >= 0 )
    {
      ValueName.Buffer = L"MmConfigRange";
      *(_DWORD *)&ValueName.Length = 1703962;
      v1 = ZwDeleteValueKey(Handle, &ValueName);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
    return v1;
  }
  return result;
}
