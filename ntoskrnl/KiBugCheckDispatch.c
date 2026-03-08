/*
 * XREFs of KiBugCheckDispatch @ 0x14042BEC0
 * Callers:
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1404255C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140425980 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140425D00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x140426080 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140426400 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140427700 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140428C40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140429040 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140429740 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x14042AF80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x14042C440 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
