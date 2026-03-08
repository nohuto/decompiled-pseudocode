/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140B110B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140B11100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140B11180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140B11200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140B11280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140B11300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140B11380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140B11400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140B11480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140B11500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140B11580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140B11600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140B11680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140B11700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140B11780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140B11800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140B11880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140B11900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140B11980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140B11A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140B11A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140B11B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140B11B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140B11C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140B11C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140B11D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140B11D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140B11E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140B11E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140B11F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140B12400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140B131B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140B132B0 (HalpBlkMceFastForward.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkFatalErrorHalt(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
