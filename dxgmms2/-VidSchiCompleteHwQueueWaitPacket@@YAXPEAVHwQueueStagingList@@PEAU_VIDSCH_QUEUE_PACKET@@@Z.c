void __fastcall VidSchiCompleteHwQueueWaitPacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a2 + 68);
  LOBYTE(a3) = 1;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(a1, a2, a3);
    else
      VidSchiUnwaitWaitQueuePacket((__int64)a1, (__int64)a2, a3, 0LL);
  }
  WdLogSingleEntry1(4LL, a2);
  VidSchiFreeCompletedHwQueuePacket(a2);
}
