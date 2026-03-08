/*
 * XREFs of ?VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049730
 * Callers:
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C004A820 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 */

bool __fastcall VidSchiIsPendingFlipReadyToBeSubmitted(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  int v4; // r10d

  v4 = *((_DWORD *)a4 + 263);
  return ((unsigned int)(v4 - 2) <= 1 || v4 == 14)
      && VidSchiCheckPendingFlipsForThisEntry(a1, a2, (unsigned __int64)a4, a3) == 0;
}
