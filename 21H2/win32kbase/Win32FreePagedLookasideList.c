/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C00C59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32FreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, (char *)a1);
}
