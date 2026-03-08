/*
 * XREFs of VidSchSubmitPagingCommand @ 0x1C0108A08
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0003280 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiSetPriorityContext @ 0x1C0014574 (VidSchiSetPriorityContext.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001742C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00A5470 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C0109884 (VidSchiSubmitHwPagingCommand.c)
 */

void __fastcall VidSchSubmitPagingCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _VIDSCH_CONTEXT *v5; // rsi
  struct _VIDSCH_CONTEXT *v6; // rcx
  __int64 QueuePacket; // r14
  KPRIORITY PriorityThread; // eax

  if ( VidSchIsTDRPending(a1) )
  {
    if ( (*(_DWORD *)a2 & 0x100) != 0 )
      VIDMM_DMA_POOL::ReleaseBuffer(
        *(VIDMM_DMA_POOL **)(*(_QWORD *)(a2 + 8) + 136LL),
        *(struct _VIDMM_DMA_BUFFER **)(a2 + 8),
        1);
  }
  else if ( *(_BYTE *)(a1 + 55) )
  {
    VidSchiSubmitHwPagingCommand(a1, a2);
  }
  else
  {
    v4 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(a2 + 76));
    v5 = *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)(a1 + 264) + 8 * v4);
    if ( *(_BYTE *)(a2 + 80) )
    {
      v6 = *(struct _VIDSCH_CONTEXT **)(*(_QWORD *)(a1 + 288) + 8 * v4);
      if ( v6 )
        v5 = v6;
    }
    QueuePacket = VidSchiAllocateQueuePacket((__int64)v5, 1);
    *(_DWORD *)QueuePacket = 895576406;
    *(_DWORD *)(QueuePacket + 48) = 8;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 88) = v5;
    *(_QWORD *)(QueuePacket + 104) = KeGetCurrentThread();
    *(_OWORD *)(QueuePacket + 272) = *(_OWORD *)a2;
    *(_OWORD *)(QueuePacket + 288) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(QueuePacket + 304) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(QueuePacket + 320) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(QueuePacket + 336) = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(QueuePacket + 352) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(QueuePacket + 72) = *(_QWORD *)a2;
    if ( (*(_DWORD *)(a1 + 2536) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(v5, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue(QueuePacket);
  }
}
