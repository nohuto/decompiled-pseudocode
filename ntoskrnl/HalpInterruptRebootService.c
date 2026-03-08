/*
 * XREFs of HalpInterruptRebootService @ 0x140519E00
 * Callers:
 *     HalpPreprocessNmi @ 0x1402FBBD0 (HalpPreprocessNmi.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x140502E70 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
