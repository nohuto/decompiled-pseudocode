/*
 * XREFs of ?VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z @ 0x1C0034FB0
 * Callers:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00352C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiAbortSoftwarePacket(struct _VIDSCH_QUEUE_PACKET *a1, unsigned __int64 a2)
{
  if ( *((_DWORD *)a1 + 12) != 7 || *((unsigned int *)a1 + 96) < a2 )
    return 0;
  *((_DWORD *)a1 + 16) |= 0x20u;
  return 1;
}
