/*
 * XREFs of PopOpenThermalLoggingKey @ 0x1403AB30C
 * Callers:
 *     PopThermalWriteShutdownToRegistry @ 0x14058DC80 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x14085C2A8 (PopThermalHandlePreviousShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenThermalLoggingKey(char a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  ULONG CreateOptions; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v7; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power\\LastThermalEvent");
    CreateOptions = 1;
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(L"ThermalLogging", SourceString, 520, (__int64)&v7);
    if ( PersistedStateLocation < 0 )
      return (unsigned int)PersistedStateLocation;
    RtlInitUnicodeString(&DestinationString, SourceString);
    CreateOptions = 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
  if ( PersistedStateLocation >= 0 )
    *a2 = KeyHandle;
  return (unsigned int)PersistedStateLocation;
}
