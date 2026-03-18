/*
 * XREFs of HalpLbrConfigureRecording @ 0x140935F90
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x140935E84 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrConfigureRecording(int a1, int a2)
{
  if ( a2 != HalpLbrCurrentHandle || !HalpLbrIsInUse )
    return 3221225485LL;
  HalpLbrConfigurationWorker(a1, 1u);
  return 0LL;
}
