/*
 * XREFs of ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004AB60
 * Callers:
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C00183F4 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C004A820 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 */

void __fastcall VidSchiSubmitNextFlipRange(struct HwQueueStagingList *a1, struct _VIDSCH_GLOBAL *a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // r14
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  __int64 v9; // rsi
  struct _VIDSCH_GLOBAL *v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  bool v13; // [rsp+70h] [rbp+18h] BYREF

  v10 = a2;
  v11 = a3;
  v6 = -1;
  v7 = *((_QWORD *)a2 + a3 + 400);
  while ( 1 )
  {
    v12 = v6;
    if ( v6 == *((_DWORD *)a2 + 38) )
      break;
    v13 = 0;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v10);
    v9 = (__int64)FlipQueue;
    if ( FlipQueue && *(_DWORD *)(v7 + 3076) && *(_BYTE *)(v7 + 78788) )
    {
      VidSchiSubmitNextFlipQueueEntryRange(a1, a2, &v13, a3, FlipQueue);
      if ( v13 )
        VidSchiCompletePendingFlipOnPlane((__int64)a1, (__int64)a2, a3, v9, 9u);
    }
    ++v6;
  }
}
