/*
 * XREFs of CMFRegisterEventTime @ 0x1409FFC40
 * Callers:
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall CMFRegisterEventTime(unsigned __int16 a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  const WCHAR *v3; // rdx
  NTSTATUS v4; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING v8; // [rsp+60h] [rbp-29h] BYREF
  __int64 v9; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp+2Fh] BYREF
  int v13; // [rsp+BCh] [rbp+33h]
  _BYTE Data[12]; // [rsp+C4h] [rbp+3Bh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v1 = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\CMF\\SqmData");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v9 = MEMORY[0xFFFFF78000000014];
    if ( v1 == 1 )
    {
      RtlInitUnicodeString(&ValueName, L"CMFStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v13 == 11 )
      {
        v8 = 0LL;
        RtlInitUnicodeString(&v8, L"CMFLastStartTime");
        ZwSetValueKey(KeyHandle, &v8, 0, 0xBu, Data, 8u);
      }
      RtlInitUnicodeString(&ValueName, L"SystemStartTime");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v13 == 11 )
      {
        v8 = 0LL;
        RtlInitUnicodeString(&v8, L"SystemLastStartTime");
        ZwSetValueKey(KeyHandle, &v8, 0, 0xBu, Data, 8u);
      }
    }
    else
    {
      if ( v1 == 2 )
      {
        v3 = L"CMFStartTime";
      }
      else
      {
        if ( v1 != 4 )
          return -1073741811;
        v3 = L"CMFStopTime";
      }
      RtlInitUnicodeString(&ValueName, v3);
    }
    v4 = ZwSetValueKey(KeyHandle, &ValueName, 0, 0xBu, &v9, 8u);
    ZwClose(KeyHandle);
    return v4;
  }
  return result;
}
