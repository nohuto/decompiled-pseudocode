/*
 * XREFs of SddlpAlloc @ 0x1407507C8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1402C0AD0 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1402C0D20 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14074CCC8 (LocalpConvertStringSidToSid.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14074FCB0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x140750814 (LocalGetStringForControl.c)
 *     LocalConvertSidToStringSidW @ 0x1408368E8 (LocalConvertSidToStringSidW.c)
 *     AppendCondition @ 0x1409CFE44 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1409CFF1C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1409D00DC (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1409D019C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1409D0304 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D07DC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D0DC8 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1409D0F74 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1409D117C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1409D1838 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D2214 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D2E2C (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1409D3684 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
