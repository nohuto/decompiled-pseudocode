/*
 * XREFs of SepRegOpenKey @ 0x140739428
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403A918C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1407393AC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841434 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14084B3BC (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1408597BC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409CEF1C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
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
