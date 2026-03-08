/*
 * XREFs of ?VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049470
 * Callers:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiFlipOverwriteEligible(struct _VIDSCH_PRESENT_INFO *a1, struct _VIDSCH_FLIP_QUEUE_ENTRY *a2)
{
  return *((_DWORD *)a1 + 1) != 3 && (*((_DWORD *)a2 + 284) & 0x180) == 128;
}
