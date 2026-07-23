/*
 * XREFs of _IsMachineLanguageListInMutableLocation @ 0x1801060F0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180106A5C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 */

bool IsMachineLanguageListInMutableLocation()
{
  bool v0; // bl
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-9h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+17h] BYREF
  int v5; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v6; // [rsp+A8h] [rbp+6Fh] BYREF
  int v7; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+7Fh] BYREF

  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"MachineLanguageListMigrationState");
    v5 = 0;
    v7 = 4;
    LODWORD(v6) = 4;
    if ( (int)LdrpQueryValueKey(KeyHandle, &ValueName, &v7, &v5, (ULONG *)&v6) >= 0 )
      v0 = v5 == 1;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
