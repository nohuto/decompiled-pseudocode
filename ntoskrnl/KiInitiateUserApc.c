/*
 * XREFs of KiInitiateUserApc @ 0x14041C3D0
 * Callers:
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 *     NtRaiseException @ 0x140416BC0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x14041B4E0 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1404212A0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140424F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404285C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140429740 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14042BF40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14042C440 (KiFastFailDispatch.c)
 * Callees:
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
