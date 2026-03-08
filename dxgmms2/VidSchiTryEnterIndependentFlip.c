/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C003C8E4
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x1C0002440 (VidSchiUpdatePresentParameters.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     VidSchConfirmToken @ 0x1C003E930 (VidSchConfirmToken.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C00355FC (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C003A950 (VidSchiFlushPendingTokenList.c)
 */

void __fastcall VidSchiTryEnterIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // r11d

  if ( VidSchiCheckPlaneIndependentFlipCondition(a2, a3, a4) )
    VidSchiFlushPendingTokenList(a1, a2, a3, v7);
}
