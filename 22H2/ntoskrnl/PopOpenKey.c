/*
 * XREFs of PopOpenKey @ 0x140387D08
 * Callers:
 *     PpmInitIllegalThrottleLogging @ 0x140387C40 (PpmInitIllegalThrottleLogging.c)
 *     PopOpenPowerKey @ 0x140387CEC (PopOpenPowerKey.c)
 *     PopLoadResumeContext @ 0x140980D28 (PopLoadResumeContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
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
