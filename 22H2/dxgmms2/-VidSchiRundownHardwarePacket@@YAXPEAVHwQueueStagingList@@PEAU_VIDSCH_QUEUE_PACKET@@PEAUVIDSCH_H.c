/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00383B0
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00382F4 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010CF4 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00165C4 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036548 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036D04 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036E98 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038120 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00385F8 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00386C4 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownHardwarePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  struct VIDSCH_HW_QUEUE *v4; // rsi
  int v5; // edx
  struct HwQueueStagingList *v6; // rdi
  int v7; // edx
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  int v12; // eax
  struct VIDSCH_HW_QUEUE *v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  v5 = *((_DWORD *)a2 + 12);
  v6 = a1;
  if ( !v5 )
    goto LABEL_15;
  v7 = v5 - 3;
  if ( !v7 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
    return;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_8:
      VidSchiCompleteHwQueueSignalPacket(a1, a2);
      return;
    }
    v10 = (unsigned int)(v9 - 2);
    if ( !(_DWORD)v10 )
    {
LABEL_18:
      VidSchiCompleteHwQueuePacket(a1, a2, (__int64)a3);
      return;
    }
    if ( (_DWORD)v10 != 1 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v10);
      v11[3] = 281LL;
      v11[4] = 2048LL;
      v11[5] = v4;
      v11[6] = a2;
      v11[7] = *((int *)a2 + 12);
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
      goto LABEL_8;
    }
LABEL_15:
    if ( (*((_DWORD *)a2 + 20) & 0x40) == 0 )
    {
      v13 = 0LL;
      VidSchiReleasePacketToGpu(a1, a2, &v13);
      return;
    }
    VidSchiSimulateProgressFenceCompletion(a1, a2, a3);
    a1 = v6;
    goto LABEL_18;
  }
  v12 = *((_DWORD *)a2 + 68);
  LOBYTE(a3) = 1;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket((__int64)a1, (__int64)a2, 1);
    else
      VidSchiUnwaitWaitQueuePacket((__int64)a1, (__int64)a2, (__int64)a3, 0LL);
  }
  VidSchiCompleteHwQueueWaitPacket(a2, v8);
}
