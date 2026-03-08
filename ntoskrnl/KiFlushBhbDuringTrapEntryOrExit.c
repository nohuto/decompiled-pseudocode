/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x14042C900
 * Callers:
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x14041B190 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x14041C4B0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14041C810 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14041CB70 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14041CED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14041D230 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x140423200 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140423740 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140424100 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140424480 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140424F00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1404255C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140425980 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140425D00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x140426080 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140426400 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x140426800 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140426B80 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140427700 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140427B00 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1404285C0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140428C40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140429740 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140429E80 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14042A200 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14042A580 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x14042A900 (KiSystemService.c)
 *     KiSystemCall32 @ 0x14042ABC0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF4E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140AF51C0 (KiSystemCall64Shadow.c)
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
