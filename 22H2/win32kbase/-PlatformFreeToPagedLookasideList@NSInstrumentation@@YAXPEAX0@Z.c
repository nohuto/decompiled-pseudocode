/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C0096E20
 * Callers:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C003C5D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C003E520 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0047F20 (Win32FreeToPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00946EC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFreeToPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2,
        void *a3)
{
  ExFreeToPagedLookasideList(this, a2);
}
