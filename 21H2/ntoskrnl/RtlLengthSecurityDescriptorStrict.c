/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x140419F54
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x140678454 (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x140719180 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1409CE6B8 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
