/*
 * XREFs of ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0087EE4
 * Callers:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0087BD0 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::xWaitForAllPagingEngines(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        void (*a3)(void *),
        void *a4,
        const unsigned __int64 *a5,
        unsigned int a6)
{
  unsigned int v6; // edi

  v6 = (unsigned int)a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    if ( a6 == -1 )
      VIDMM_GLOBAL::FlushPagingBuffer(this, 0, a3, a4);
    else
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, a6, 0, 0LL, 0LL, 0, 0);
  }
  VIDMM_GLOBAL::WaitForFences(this, a2, (const unsigned __int64 *)a3, v6, a5);
}
