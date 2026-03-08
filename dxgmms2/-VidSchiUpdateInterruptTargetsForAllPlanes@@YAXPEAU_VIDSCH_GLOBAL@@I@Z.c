/*
 * XREFs of ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00430EC (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x1C0049F00 (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiUpdateInterruptTargetsForAllPlanes(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  __int64 v6; // r9
  bool v7; // zf
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 400); (unsigned int)v3 < *((_DWORD *)a1 + 38); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(288 * v3 + i + 392) + 1LL;
    v7 = *(_DWORD *)(288 * v3 + i + 196) == 0;
    v8 = v6;
    if ( !v7 )
    {
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 32), v3, &v8);
      VidSchiRecalculateInterruptTargetForFlipQueue(a1, *(struct VIDSCH_FLIP_QUEUE **)(i + 8 * v3 + 40), v3, &v8);
      v6 = v8;
    }
    VidSchiSetInterruptTargetPresentId(a1, a2, v3, v6, 0, 0);
  }
}
