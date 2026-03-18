/*
 * XREFs of HalpInterruptLookupController @ 0x14031FD00
 * Callers:
 *     HalDisableInterrupt @ 0x14031F710 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FC08 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x14031FCA0 (HalpInterruptFindLines.c)
 *     HalpInterruptRegisterController @ 0x140378D34 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140379AF0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037CB74 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x14037CD5C (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CFB0 (HalpUnmaskInterrupt.c)
 *     HalpMaskInterrupt @ 0x1403B1FF0 (HalpMaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405044CC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504870 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x140505280 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405053F8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140506828 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050689C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A95448 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpInterruptLookupController(int a1)
{
  ULONG_PTR *v1; // rax
  ULONG_PTR *v2; // rdx

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    v2 = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)v2 + 64) == a1 )
      return v2;
  }
  return 0LL;
}
