/*
 * XREFs of CmpLinkKeyToHive @ 0x1408159D8
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

bool __fastcall CmpLinkKeyToHive(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // ebx
  UNICODE_STRING Data; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Disposition = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  Data = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition) >= 0 )
  {
    if ( Disposition == 1 )
    {
      RtlInitUnicodeString(&Data, a2);
      v3 = ZwSetValueKey(KeyHandle, &CmSymbolicLinkValueName, 0, 6u, Data.Buffer, Data.Length);
      ZwClose(KeyHandle);
      return v3 >= 0;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
