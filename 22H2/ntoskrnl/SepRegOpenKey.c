/*
 * XREFs of SepRegOpenKey @ 0x14070E324
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CB46C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14070E1BC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14079E798 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407C550C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407CDD7C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140925A1C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
