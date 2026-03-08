/*
 * XREFs of BapdpRegisterWmdResult @ 0x140B94A14
 * Callers:
 *     BapdpProcessWmdResults @ 0x140B42B54 (BapdpProcessWmdResults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

int __fastcall BapdpRegisterWmdResult(ULONG *Data)
{
  int result; // eax
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+67h] BYREF
  int v8; // [rsp+A8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  Disposition = 0;
  result = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( Data )
  {
    KeyHandle = 0LL;
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MemoryDiagnostic");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      v4 = KeyHandle;
      if ( v3 >= 0 )
      {
        ZwClose(KeyHandle);
        RtlInitUnicodeString(&DestinationString, L"Results");
        if ( ZwSetValueKey(Handle, &DestinationString, 0, 3u, Data, Data[1]) >= 0 )
        {
          v8 = 1;
          RtlInitUnicodeString(&DestinationString, L"RunMemDiag");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v8, 4u);
        }
        v4 = Handle;
      }
      return ZwClose(v4);
    }
  }
  return result;
}
