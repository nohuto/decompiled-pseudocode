/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C00D0440
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00C6824 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall Win32AllocPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned int a2,
        unsigned int a3,
        USHORT a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(a1, (SIZE_T)a1, a2, a3, a4);
}
