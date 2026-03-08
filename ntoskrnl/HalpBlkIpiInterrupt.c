/*
 * XREFs of HalpBlkIpiInterrupt @ 0x140B12100
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicEndOfInterrupt @ 0x140B12F90 (HalpBlkApicEndOfInterrupt.c)
 *     HalpBlkHandleIpi @ 0x140B13190 (HalpBlkHandleIpi.c)
 */

void HalpBlkIpiInterrupt()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1968LL));
  HalpBlkHandleIpi();
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
