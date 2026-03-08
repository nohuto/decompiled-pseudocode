/*
 * XREFs of HalpBlkLocalErrorInterrupt @ 0x140B121C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicEndOfInterrupt @ 0x140B12F90 (HalpBlkApicEndOfInterrupt.c)
 */

void HalpBlkLocalErrorInterrupt()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1976LL));
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
