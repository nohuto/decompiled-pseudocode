/*
 * XREFs of BapdpRegisterResumeInformation @ 0x140B6F8BC
 * Callers:
 *     BapdpProcessResumeInformation @ 0x140B44768 (BapdpProcessResumeInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

int __fastcall BapdpRegisterResumeInformation(PVOID Data, ULONG DataSize)
{
  int result; // eax
  NTSTATUS v5; // eax
  HANDLE v6; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF

  Disposition = 0;
  result = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( Data )
  {
    if ( DataSize )
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
        RtlInitUnicodeString(&DestinationString, L"Winresume");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        v6 = KeyHandle;
        if ( v5 >= 0 )
        {
          ZwClose(KeyHandle);
          RtlInitUnicodeString(&DestinationString, L"ResumeContext");
          ZwSetValueKey(Handle, &DestinationString, 0, 3u, Data, DataSize);
          v6 = Handle;
        }
        return ZwClose(v6);
      }
    }
  }
  return result;
}
