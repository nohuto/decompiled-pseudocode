/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 *     VidSchiCompletePendingFlip @ 0x1C001833C (VidSchiCompletePendingFlip.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0048450 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1C004900C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_K.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004AB60 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B73C (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B7B4 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B864 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C0105E14 (VidSchResetFlipQueueTimeout.c)
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C010A590 (VidSchiGetNumFlipAllocAttribs.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 2) + 3200);
  if ( (_DWORD)v1 == -1 )
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 32);
  else
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 8 * v1 + 40);
}
