/*
 * XREFs of HalpInterruptLookupController @ 0x14028EEE0
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14028EDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x1403748A0 (HalpInterruptRegisterLine.c)
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x1403791C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedLineState @ 0x140502790 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1405031A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140504748 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1405047BC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
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
