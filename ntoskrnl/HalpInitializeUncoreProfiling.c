/*
 * XREFs of HalpInitializeUncoreProfiling @ 0x1403A5450
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A8DE90 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*HalpInitializeUncoreProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[19];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
