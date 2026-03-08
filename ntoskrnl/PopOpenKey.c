/*
 * XREFs of PopOpenKey @ 0x1403900E4
 * Callers:
 *     PpmInitIllegalThrottleLogging @ 0x14039001C (PpmInitIllegalThrottleLogging.c)
 *     PopOpenPowerKey @ 0x1403900C8 (PopOpenPowerKey.c)
 *     PopLoadResumeContext @ 0x14097DC78 (PopLoadResumeContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const WCHAR *a2)
{
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE v9; // [rsp+C0h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v9 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 576;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateKey(&v9, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v4 < 0 )
      v9 = 0LL;
    else
      *a1 = v9;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v4;
}
