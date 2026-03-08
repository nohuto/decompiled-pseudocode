/*
 * XREFs of ?VidMmGetAllocationFlipQueueReferencesPointer@@YAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00EA3C4 (-VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@.c)
 */

struct VIDMM_FLIP_QUEUE_REFERENCES *__fastcall VidMmGetAllocationFlipQueueReferencesPointer(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::VidMmGetAllocationFlipQueueReferencesPointer(a1, a2);
}
