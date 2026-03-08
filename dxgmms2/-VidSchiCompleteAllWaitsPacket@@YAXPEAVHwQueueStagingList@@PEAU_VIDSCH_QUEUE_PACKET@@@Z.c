/*
 * XREFs of ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00357F0
 * Callers:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0014C54 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0013514 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003C938 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCompleteAllWaitsPacket(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  int v4; // eax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v4 = *((_DWORD *)a2 + 68);
    if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(a1, a2, 0LL);
      VidSchiUnwaitWaitQueuePacket((__int64)a1, (__int64)a2, 0LL, 0LL);
    }
  }
}
