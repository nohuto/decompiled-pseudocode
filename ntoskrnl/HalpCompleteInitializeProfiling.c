/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x140A8DF2C
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A8DE90 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*HalpCompleteInitializeProfiling())(void)
{
  __int64 (*result)(void); // rax

  result = HalpProfileInterface[16];
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
