/*
 * XREFs of SepRegOpenKey @ 0x1407F5978
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403ADEDC (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1407F58FC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140843A84 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14084E76C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14085D47C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409D1DBC (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
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
