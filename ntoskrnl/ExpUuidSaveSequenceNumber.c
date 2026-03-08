/*
 * XREFs of ExpUuidSaveSequenceNumber @ 0x14085B300
 * Callers:
 *     ExpUuidSaveSequenceNumberIf @ 0x1406F6ECC (ExpUuidSaveSequenceNumberIf.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 */

__int64 ExpUuidSaveSequenceNumber()
{
  int PersistedStateLocation; // ebx
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  Data = ExpUuidSequenceNumber;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset(SourceString, 0, 0x1FEuLL);
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"KernelExecutive",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Executive",
                             0,
                             SourceString,
                             0x1FEu,
                             0LL);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PersistedStateLocation = ZwOpenKey(&KeyHandle, 0xC0000000, &ObjectAttributes);
    if ( PersistedStateLocation >= 0 )
      PersistedStateLocation = ZwSetValueKey(
                                 KeyHandle,
                                 (PUNICODE_STRING)&ExpUuidSequenceNumberRegName,
                                 0,
                                 4u,
                                 &Data,
                                 4u);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)PersistedStateLocation;
}
