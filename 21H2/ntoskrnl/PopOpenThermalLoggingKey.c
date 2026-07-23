/*
 * XREFs of PopOpenThermalLoggingKey @ 0x1403CCACC
 * Callers:
 *     PopThermalWriteShutdownToRegistry @ 0x14056FC18 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0BB0 (PopThermalHandlePreviousShutdown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x1406347D0 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenThermalLoggingKey(char a1, HANDLE *a2)
{
  NTSTATUS PersistedStateLocation; // ecx
  ULONG v4; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power\\LastThermalEvent");
    v4 = 1;
  }
  else
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ThermalLogging",
                               0LL,
                               L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Power",
                               LocationTypeRegistry,
                               SourceString,
                               0x208u,
                               &Disposition);
    if ( PersistedStateLocation < 0 )
      return (unsigned int)PersistedStateLocation;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, v4, 0LL);
  if ( PersistedStateLocation >= 0 )
    *a2 = KeyHandle;
  return (unsigned int)PersistedStateLocation;
}
