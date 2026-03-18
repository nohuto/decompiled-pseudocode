/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C00C4AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

char *__fastcall Win32AllocPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int a2,
        ULONG a3,
        USHORT a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(a1, (SIZE_T)a1, a2, a3, a4);
}
