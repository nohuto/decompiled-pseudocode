/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x14030D2D0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1406B8AF8 (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x1407A5244 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1407A5314 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
