/*
 * XREFs of KiInitiateUserApc @ 0x140402BA0
 * Callers:
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FE0E0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140406870 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140407D00 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040E800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140412700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 */

char __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v2; // [rsp+0h] [rbp-138h] BYREF

  return KiDeliverApc(1, (int)&v2, (_KTRAP_FRAME *)(v0 - 128));
}
