/*
 * XREFs of SddlpAlloc @ 0x14067757C
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406768BC (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140676AC0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x140676B80 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x1406775C8 (LookupSidInTable.c)
 *     LocalConvertSidToStringSidW @ 0x1406C85A0 (LocalConvertSidToStringSidW.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalpConvertStringSidToSid @ 0x140843D74 (LocalpConvertStringSidToSid.c)
 *     AppendCondition @ 0x1409D00CC (AppendCondition.c)
 *     DecodeAttributeName @ 0x1409D01AC (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1409D0360 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1409D0420 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1409D0588 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D0A60 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D1048 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1409D11F4 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1409D1418 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1409D1A80 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D1D04 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D23E8 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D3004 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1409D3874 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
