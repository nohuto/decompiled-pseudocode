/*
 * XREFs of VfUtilUpdateSpecialPoolSetting @ 0x1409C7B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilUpdateSpecialPoolSetting(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 )
  {
    v2 = ((unsigned __int8)VfDifSetting ^ a1) & 1;
    result = v2 ^ (unsigned int)VfDifSetting;
    VfDifSetting ^= v2;
  }
  return result;
}
