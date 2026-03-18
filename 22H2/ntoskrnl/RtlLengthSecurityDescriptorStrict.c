/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1402973F4
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CFC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x14070D99C (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14070DD5C (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x14070DA6C (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
