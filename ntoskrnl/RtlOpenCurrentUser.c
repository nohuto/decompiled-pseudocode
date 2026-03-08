/*
 * XREFs of RtlOpenCurrentUser @ 0x140749100
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1402BEDA8 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    RtlFreeUnicodeString(&UnicodeString);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&UnicodeString, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return (unsigned int)v4;
}
