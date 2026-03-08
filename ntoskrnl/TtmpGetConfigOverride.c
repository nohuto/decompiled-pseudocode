/*
 * XREFs of TtmpGetConfigOverride @ 0x1409A076C
 * Callers:
 *     TtmpInitializeWatchdogTimeouts @ 0x1409A088C (TtmpInitializeWatchdogTimeouts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 */

char __fastcall TtmpGetConfigOverride(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
    && (RtlInitUnicodeString(&ValueName, a2),
        v5 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x10u,
               &ResultLength),
        ZwClose(KeyHandle),
        v5 >= 0)
    && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    *a3 = HIDWORD(KeyValueInformation);
    return 1;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
