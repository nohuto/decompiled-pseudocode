/*
 * XREFs of ?WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008B25C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForAllPagingOperations(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v4; // edx
  const unsigned __int64 *v5; // rsi
  struct _VIDSCH_SYNC_OBJECT **v6; // rbp

  v4 = *((_DWORD *)a2 + 17) & 0x3F;
  v5 = (const unsigned __int64 *)((char *)this + 8 * v4 + 5480);
  v6 = (struct _VIDSCH_SYNC_OBJECT **)((char *)this + 8 * v4);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 0, 0LL, 0LL, 0, 0);
  VIDMM_GLOBAL::WaitForFences(this, v6 + 749, (const unsigned __int64 *)a2 + 20, 1u, v5);
}
