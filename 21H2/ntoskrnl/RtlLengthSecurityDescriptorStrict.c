/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1403F8690
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406629A8 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x140662C28 (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x140924F3C (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
