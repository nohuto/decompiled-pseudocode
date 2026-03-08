/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C002CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C00EA7F8 (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVID.c)
 */

void __fastcall VidMmSetAllocationFlipQueueReferencesPointer(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(a1, a2, a3);
}
