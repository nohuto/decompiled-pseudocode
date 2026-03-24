/*
 * XREFs of KiBugCheckDispatch @ 0x140411D40
 * Callers:
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14040A440 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14040BC80 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040BF80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040C280 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040C580 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040C880 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040DAC0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x14040EE40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140410E80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140412700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
