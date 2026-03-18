/*
 * XREFs of HalpInitSystemPhase1 @ 0x140A8C31C
 * Callers:
 *     HalInitSystem @ 0x140A8BDB0 (HalInitSystem.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A8C358 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase1(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( KeGetPcr()->Prcb.Number )
  {
    v2 = 19LL;
    v3 = 20LL;
  }
  else
  {
    v2 = 17LL;
    v3 = 18LL;
  }
  return (int)HalpInitSystemHelper(v2, v3, a1) >= 0;
}
