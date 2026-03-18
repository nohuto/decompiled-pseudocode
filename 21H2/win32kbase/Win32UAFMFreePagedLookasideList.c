/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1C01675B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C0146494 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid((__int64)a1, a2);
  v4 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v4, (char *)a1 - 16);
}
