/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C008FEC0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RGNMEMOBJ::vDestroyScanLookAsideList(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  if ( RGNMEMOBJ::s_pSCANLookAsideList )
  {
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, (char *)RGNMEMOBJ::s_pSCANLookAsideList);
    RGNMEMOBJ::s_pSCANLookAsideList = 0LL;
  }
}
