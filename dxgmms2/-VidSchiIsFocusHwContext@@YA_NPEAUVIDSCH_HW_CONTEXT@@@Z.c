/*
 * XREFs of ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C001D092
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00430EC (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsFocusHwContext(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( *((_BYTE *)a1 + 88) )
    return gulPublicPriorityToSchedulingPriority[*((unsigned int *)a1 + 21)] == 16;
  else
    return *((_BYTE *)a1 + 76) & 1;
}
