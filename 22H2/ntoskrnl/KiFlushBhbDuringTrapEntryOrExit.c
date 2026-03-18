/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00
 * Callers:
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x140423520 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140424840 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140424BA0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140424F00 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425260 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404255C0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x14042B600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042BB40 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042C500 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042C880 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042D9C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042DD80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042E100 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042E480 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042E800 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042EC00 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042EF80 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14042FB00 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14042FF00 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140431040 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432280 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140432600 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140432980 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140432D00 (KiSystemService.c)
 *     KiSystemCall32 @ 0x140432FC0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF8E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140AF91C0 (KiSystemCall64Shadow.c)
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
