/*
 * XREFs of ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C00C4A90
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

_BOOL8 __fastcall RGNMEMOBJ::InitializeScanLookAsideList(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  RGNMEMOBJ::s_pSCANLookAsideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                                      a1,
                                      0x70uLL,
                                      1935764551,
                                      0x6E637347u,
                                      0x60u);
  return RGNMEMOBJ::s_pSCANLookAsideList != 0LL;
}
