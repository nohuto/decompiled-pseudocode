/*
 * XREFs of ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CB52
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D3B0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C001D58A (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042E6C (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0013514 (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC2E (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003C938 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

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
