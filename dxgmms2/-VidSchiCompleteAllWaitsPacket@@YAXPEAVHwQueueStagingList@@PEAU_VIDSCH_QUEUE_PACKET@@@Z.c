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
