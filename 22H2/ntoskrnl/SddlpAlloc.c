/*
 * XREFs of SddlpAlloc @ 0x1406ED338
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1403487A0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403BFFE0 (SeConvertStringSidToSid.c)
 *     LocalpGetStringForCondition @ 0x1406EBBE8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x1406EC010 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406EC05C (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1406EC1B0 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x1406EC2F0 (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x1406ED11C (LookupSidInTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406EFF90 (LocalGetStringForControl.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407874B4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407B8370 (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x140926130 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x140926C84 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140926D64 (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x140926F18 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140927080 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927554 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927B38 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x140927CC0 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x140927F44 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140928630 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929264 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
