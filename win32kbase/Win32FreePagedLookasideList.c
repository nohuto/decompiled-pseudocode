/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C00D40E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B774 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32FreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, (char *)a1);
}
