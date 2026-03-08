/*
 * XREFs of HalPerformEndOfInterrupt @ 0x1402C7920
 * Callers:
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14041BCF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14041E8C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x140456EA0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140504748 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1405047BC (HalpInterruptServiceActiveBoth.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && *(_BYTE *)(a1 + 101) )
    HalpInterruptServiceActiveBoth();
  result = HalPerformEndOfInterruptAtController();
  if ( HalpInterruptDirectedEoiModeEnabled )
    return HalpInterruptPerformDirectedEndOfInterrupt(a1);
  return result;
}
