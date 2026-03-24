/*
 * XREFs of HalpInterruptLookupController @ 0x140378770
 * Callers:
 *     HalDisableInterrupt @ 0x140376CF0 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378050 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403784DC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378690 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x140378710 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x1403861C8 (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x14038C4D0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A306C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A33F8 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A6890 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AF294 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403B2370 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403B29D4 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB584 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC6A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BDA78 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDAEC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099822C (HalpInterruptMaskAcpi.c)
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
    if ( *((_DWORD *)v2 + 58) == a1 )
      return v2;
  }
  return 0LL;
}
