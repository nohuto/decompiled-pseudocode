/*
 * XREFs of PopReadRegKeyValue @ 0x140380F18
 * Callers:
 *     PopReadUlongPowerKey @ 0x140380EC0 (PopReadUlongPowerKey.c)
 *     PopDiagTracePerfTrackData @ 0x14098D168 (PopDiagTracePerfTrackData.c)
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 *     PopBatteryReadOscBits @ 0x140B7219C (PopBatteryReadOscBits.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadRegKeyValue(PCWSTR SourceString, PCWSTR a2, size_t Size, int a4, void *a5)
{
  _DWORD *Pool2; // rdi
  NTSTATUS v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Pool2 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v9 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1346721364LL);
      if ( !Pool2 )
      {
        v9 = -1073741801;
        goto LABEL_4;
      }
      v9 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             Pool2,
             ResultLength,
             &ResultLength);
    }
    if ( v9 >= 0 )
    {
      if ( !a4 || Pool2[1] == a4 )
      {
        if ( Pool2[2] == Size )
          memmove(a5, Pool2 + 3, Size);
        else
          v9 = -1073741789;
      }
      else
      {
        v9 = -1073741788;
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x50455654u);
  return (unsigned int)v9;
}
