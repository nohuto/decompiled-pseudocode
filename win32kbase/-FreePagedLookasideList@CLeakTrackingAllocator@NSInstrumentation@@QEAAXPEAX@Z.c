/*
 * XREFs of ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B774
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008DC04 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C009FC50 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C00D40E0 (Win32FreePagedLookasideList.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32UAFMAllocPagedLookasideList @ 0x1C017D0D0 (Win32UAFMAllocPagedLookasideList.c)
 *     Win32UAFMFreePagedLookasideList @ 0x1C017D3A0 (Win32UAFMFreePagedLookasideList.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx

  v2 = gpLeakTrackingAllocator;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a2 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(v2, a2);
}
