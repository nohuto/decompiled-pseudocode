/*
 * XREFs of PopOpenPersistedRegistryKey @ 0x14080FB6C
 * Callers:
 *     PopLidReliabilityInit @ 0x14038FDA0 (PopLidReliabilityInit.c)
 *     PopSaveLidReliabilityState @ 0x140987B68 (PopSaveLidReliabilityState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PopOpenPersistedRegistryKey(__int64 a1, HANDLE *a2)
{
  int PersistedStateLocation; // ecx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v6; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"Power",
                             0LL,
                             L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                             0,
                             SourceString,
                             0x208u,
                             &v6);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( PersistedStateLocation >= 0 )
      *a2 = KeyHandle;
  }
  return (unsigned int)PersistedStateLocation;
}
