/*
 * XREFs of SddlpAlloc @ 0x14069DF28
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA40 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14020BC90 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalpConvertStringSidToSid @ 0x14069A428 (LocalpConvertStringSidToSid.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14069D410 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     LookupSidInTable @ 0x1406C3710 (LookupSidInTable.c)
 *     LocalConvertSidToStringSidW @ 0x140837994 (LocalConvertSidToStringSidW.c)
 *     AppendCondition @ 0x1409D2CE4 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1409D2DBC (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1409D2F7C (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1409D303C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1409D31A4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D367C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D3C68 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1409D3E14 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1409D401C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1409D46D8 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D49C4 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D50B4 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5CCC (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1409D6524 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
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
