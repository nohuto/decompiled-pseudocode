/*
 * XREFs of Win32AllocPagedLookasideListImpl @ 0x1C0127C50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C0127C74 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

void *__fastcall Win32AllocPagedLookasideListImpl(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(a1, (unsigned __int64)a1, a2, a3, a4);
}
