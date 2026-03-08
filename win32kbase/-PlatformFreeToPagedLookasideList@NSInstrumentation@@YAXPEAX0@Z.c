/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C00A5738
 * Callers:
 *     Win32AllocateFromPagedLookasideList @ 0x1C00535E0 (Win32AllocateFromPagedLookasideList.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0055800 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0055B50 (Win32FreeToPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00A3274 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
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
