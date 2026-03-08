/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1404164D0
 * Callers:
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 *     NtRaiseException @ 0x140416BC0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404172F0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x14041A7F0 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x14041B4E0 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1404212A0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140424F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1404285C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140429740 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14042BF40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14042C440 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x8B22u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
