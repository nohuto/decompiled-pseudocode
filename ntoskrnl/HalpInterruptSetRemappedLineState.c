/*
 * XREFs of HalpInterruptSetRemappedLineState @ 0x140502790
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140379248 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineState(int *a1)
{
  ULONG_PTR *v1; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
    return HalpInterruptSetRemappedLineStateInternal((__int64)v1, v2, v3);
  HalpInterruptSetProblemEx(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3268);
  return 3221225485LL;
}
