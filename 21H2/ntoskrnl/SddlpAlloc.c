/*
 * XREFs of SddlpAlloc @ 0x140669778
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14026DA40 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403C07B0 (SeConvertStringSidToSid.c)
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140668450 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14066849C (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1406685F0 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x140668730 (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x1406689C4 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x14066955C (LookupSidInTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14066A870 (LocalGetStringForControl.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140787774 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407B80D0 (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x140926240 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x140926D94 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140926E74 (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x140927028 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140927190 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927664 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927C48 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x140927DD0 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140928740 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929374 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
