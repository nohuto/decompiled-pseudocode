/*
 * XREFs of PopOpenHiberPersistedKey @ 0x14080FEC0
 * Callers:
 *     PopQueryHiberPersistedRegValue @ 0x14080FD60 (PopQueryHiberPersistedRegValue.c)
 *     PopSetHiberPersistedRegValue @ 0x1409861D8 (PopSetHiberPersistedRegValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall PopOpenHiberPersistedKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess)
{
  const WCHAR *v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
    return -1073741811;
  v4 = PopHibernatePersistedRegLocation;
  if ( !PopHibernatePersistedRegLocation )
    return -1073741811;
  *KeyHandle = (HANDLE)-1LL;
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (DesiredAccess & 0x20006) == 0x20006 )
    return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
  else
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
