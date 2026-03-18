/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C0096B94
 * Callers:
 *     Win32AllocateFromPagedLookasideList @ 0x1C003E520 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocateFromPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2)
{
  return ExAllocateFromPagedLookasideList(this);
}
