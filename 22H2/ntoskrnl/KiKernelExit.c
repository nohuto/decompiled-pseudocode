/*
 * XREFs of KiKernelExit @ 0x140AF8B80
 * Callers:
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041EF50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429630 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0xA010u, (unsigned __int64)v7);
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && (KeGetPcr()->Prcb.ShadowFlags & 1) != 0 )
      __writegsdword(0xA018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
    __writecr3((unsigned __int64)v7);
  }
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
    __asm { verw    [rsp+arg_18] }
  __asm
  {
    swapgs
    iretq
  }
}
