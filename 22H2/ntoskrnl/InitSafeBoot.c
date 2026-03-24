/*
 * XREFs of InitSafeBoot @ 0x140A8C3D0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 */

int __fastcall InitSafeBoot(char a1)
{
  int result; // eax
  NTSTATUS v3; // ebx
  PUNICODE_STRING Class; // [rsp+28h] [rbp-69h]
  ULONG CreateOptions[2]; // [rsp+30h] [rbp-61h]
  ULONG CreateOptionsa[2]; // [rsp+30h] [rbp-61h]
  __int64 v7; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  __int64 Disposition; // [rsp+70h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v13[2]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+37h]
  int v15; // [rsp+D0h] [rbp+3Fh]

  LODWORD(v7) = 0;
  KeyHandle = 0LL;
  v14 = 0LL;
  v15 = 0;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSafeBoot;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  memset(v13, 0, sizeof(v13));
  Disposition = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"AlternateShell");
      LODWORD(Class) = 44;
      if ( (int)NtQueryValueKey(
                  KeyHandle,
                  (unsigned __int64)&DestinationString,
                  2LL,
                  (unsigned __int64)v13,
                  (size_t)Class,
                  (unsigned __int64)&Disposition) < 0 )
        a1 = 0;
    }
    RtlInitUnicodeString(&DestinationString, L"Option");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, (PULONG)&Disposition + 1);
    result = NtClose(KeyHandle);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OptionValue");
      CreateOptions[0] = 4;
      NtSetValueKey(
        (__int64)Handle,
        (unsigned __int64)&DestinationString,
        0LL,
        4LL,
        &InitSafeBootMode,
        *(size_t *)CreateOptions);
      if ( a1 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UseAlternateShell");
        CreateOptionsa[0] = 4;
        LODWORD(v7) = 1;
        NtSetValueKey((__int64)Handle, (unsigned __int64)&DestinationString, 0LL, 4LL, &v7, *(size_t *)CreateOptionsa);
      }
      return NtClose(Handle);
    }
  }
  return result;
}
