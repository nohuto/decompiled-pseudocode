/*
 * XREFs of EtwpCreateKey @ 0x1405FED84
 * Callers:
 *     EtwpCreateKeyTreeForPath @ 0x1405FEE28 (EtwpCreateKeyTreeForPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 */

__int64 __fastcall EtwpCreateKey(PCWSTR SourceString)
{
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v1 >= 0 )
    ZwClose(KeyHandle);
  return (unsigned int)v1;
}
