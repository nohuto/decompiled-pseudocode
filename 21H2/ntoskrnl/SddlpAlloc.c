/*
 * XREFs of SddlpAlloc @ 0x140674548
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14027F790 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403C0380 (SeConvertStringSidToSid.c)
 *     LocalpGetStringForCondition @ 0x140672DF8 (LocalpGetStringForCondition.c)
 *     EncloseSubCondition @ 0x140673220 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14067326C (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1406733C0 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x140673500 (LocalConvertSidToStringSidW.c)
 *     LocalConvertAclToString @ 0x140673794 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x14067432C (LookupSidInTable.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406771A0 (LocalGetStringForControl.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407875B4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1407B7BB0 (LocalpConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x1409260E0 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x140926C34 (AppendCondition.c)
 *     DecodeAttributeName @ 0x140926D14 (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x140926EC8 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140927030 (GetAttributeName.c)
 *     GetOperandValue @ 0x140927504 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140927AE8 (GetOperatorIndexByName.c)
 *     GetStringOperandValue @ 0x140927C70 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x140927EF4 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409285E0 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929214 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
