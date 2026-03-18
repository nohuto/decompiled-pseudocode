/*
 * XREFs of PopOpenKey @ 0x1403B1A48
 * Callers:
 *     PopOpenPowerKey @ 0x1403B1A2C (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403B80CC (PpmInitIllegalThrottleLogging.c)
 *     PopLoadResumeContext @ 0x140807A78 (PopLoadResumeContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
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
