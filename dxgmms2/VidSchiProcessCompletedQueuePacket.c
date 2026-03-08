/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C001831C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiDiscardQueuePacket @ 0x1C01060F8 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = (struct _VIDSCH_QUEUE_PACKET *)VidSchiProcessCompletedQueuePacketInternal(result, a2, a3);
  while ( result );
  return result;
}
