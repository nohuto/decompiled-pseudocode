/*
 * XREFs of SepRegOpenKey @ 0x140717184
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CBB6C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14071701C (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14079E368 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407C4D4C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407CDE5C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409259CC (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
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
