/*
 * XREFs of HalpShouldRecoveryBeAttempted @ 0x14051702C
 * Callers:
 *     HalpMcaReportError @ 0x140501778 (HalpMcaReportError.c)
 *     HalpMceRecovery @ 0x1405169E0 (HalpMceRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpShouldRecoveryBeAttempted(int a1, const signed __int64 *a2)
{
  if ( a1 == 1 )
  {
    if ( _bittest64(a2, 0x37u) )
      return 1;
  }
  else if ( a1 == 2 )
  {
    return (*a2 & 0x2000100000000000LL) == 0x2000000000000000LL;
  }
  return 0;
}
