/*
 * XREFs of VidSchiSubmitHwPagingCommand @ 0x1C0109884
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C0108A08 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DC60 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4C32 (VidSchiAllocateHwQueuePacket.c)
 */

void __fastcall VidSchiSubmitHwPagingCommand(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 HwQueuePacket; // rax

  v3 = VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(a2 + 76));
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 280) + 8LL * v3);
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v5, 1);
  *(_DWORD *)HwQueuePacket = 895576406;
  *(_DWORD *)(HwQueuePacket + 48) = 8;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(HwQueuePacket + 52) = 2;
  *(_QWORD *)(HwQueuePacket + 96) = v5;
  *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
  *(_OWORD *)(HwQueuePacket + 272) = *(_OWORD *)a2;
  *(_OWORD *)(HwQueuePacket + 288) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(HwQueuePacket + 304) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(HwQueuePacket + 320) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(HwQueuePacket + 336) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(HwQueuePacket + 352) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(HwQueuePacket + 72) = *(_QWORD *)a2;
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
}
