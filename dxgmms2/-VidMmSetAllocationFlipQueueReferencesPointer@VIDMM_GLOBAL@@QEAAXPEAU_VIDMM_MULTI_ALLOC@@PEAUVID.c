/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C00EA7F8
 * Callers:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C002CE20 (-VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C002E208 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct _KTHREAD **v6; // rsi
  int *v7; // rcx

  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 536);
  v6 = (struct _KTHREAD **)(v4 + 296);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 296));
  v7 = *(int **)(v5 + 16);
  if ( v7 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v7);
  *(_QWORD *)(v5 + 16) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(v6);
}
