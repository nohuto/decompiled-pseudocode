/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1C017D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B774 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C017D4E8 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreePagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(a1, *(char **)a1);
  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  v4 = gpLeakTrackingAllocator;
  *((_DWORD *)a1 - 1) = 0;
  NSInstrumentation::CLeakTrackingAllocator::Free(v4, (char *)a1 - 16);
}
