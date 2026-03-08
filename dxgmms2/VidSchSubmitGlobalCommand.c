/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1C00ADFC8
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 *     VidSchSwitchFromDevice @ 0x1C00ADEF0 (VidSchSwitchFromDevice.c)
 *     VidSchSuspendAdapter @ 0x1C00AE170 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromContext @ 0x1C00AE3A0 (VidSchSwitchFromContext.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00B4208 (VidSchiSuspendFlipQueues.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00EAEE8 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0003280 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSetPriorityContext @ 0x1C0014574 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00A5470 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  __int64 QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (__int64 *)(a1 + 248);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(__int64 **)(a2 + 48);
  v5 = (struct _VIDSCH_CONTEXT *)*v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1);
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 6;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = v5;
  *(_QWORD *)(QueuePacket + 104) = KeGetCurrentThread();
  *(_OWORD *)(QueuePacket + 272) = *(_OWORD *)a2;
  *(_OWORD *)(QueuePacket + 288) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(QueuePacket + 304) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(QueuePacket + 320) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(QueuePacket + 336) = *(_OWORD *)(a2 + 64);
  if ( (*(_DWORD *)(a1 + 2536) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue(QueuePacket);
}
