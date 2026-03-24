/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140413180
 * Callers:
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140402C80 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140402F70 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403260 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403550 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140403840 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x140406590 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x140409C00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14040A000 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14040A940 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14040AC80 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14040BC80 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040BF80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040C280 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040C580 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040C880 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14040CC40 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14040CFC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040DAC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14040DE80 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14040E800 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14040EE40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14040FEC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140410200 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140410540 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140410880 (KiSystemService.c)
 *     KiSystemCall32 @ 0x140410B00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A15E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140A161C0 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  if ( (KeGetPcr()->Prcb.BpbFeatures & 0x30) == 0 )
    __debugbreak();
  result = KeGetPcr()->Prcb.BpbFeatures & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake(56026LL);
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake(56026LL);
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx(56026LL);
  }
  __debugbreak();
  return result;
}
