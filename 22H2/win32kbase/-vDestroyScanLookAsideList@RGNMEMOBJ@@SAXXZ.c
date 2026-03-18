/*
 * XREFs of ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C00A9680
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C41C (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RGNMEMOBJ::vDestroyScanLookAsideList(__int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rcx
  __int64 v2; // rbx
  char *v3; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(char **)(v2 + 6376);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v1, v3);
    *(_QWORD *)(v2 + 6376) = 0LL;
  }
}
