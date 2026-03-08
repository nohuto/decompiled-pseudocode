/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C00A55E4
 * Callers:
 *     Win32AllocateFromPagedLookasideList @ 0x1C00535E0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocateFromPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2)
{
  return ExAllocateFromPagedLookasideList(this);
}
