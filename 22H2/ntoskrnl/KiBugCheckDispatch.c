/*
 * XREFs of KiBugCheckDispatch @ 0x1404342C0
 * Callers:
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14042D9C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042DD80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042E100 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042E480 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042E800 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14042FB00 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140431040 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140433380 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
