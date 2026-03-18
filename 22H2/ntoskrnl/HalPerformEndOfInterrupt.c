/*
 * XREFs of HalPerformEndOfInterrupt @ 0x140331670
 * Callers:
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x14045EE40 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140506828 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050689C (HalpInterruptServiceActiveBoth.c)
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
