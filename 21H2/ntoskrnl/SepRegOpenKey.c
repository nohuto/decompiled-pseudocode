/*
 * XREFs of SepRegOpenKey @ 0x1406C57D4
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CBCDC (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1406C566C (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14079E568 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407C526C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407CDFCC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140925B2C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
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
