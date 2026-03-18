/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1C00880A8
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0002D30 (VidSchSuspendResumeDevice.c)
 *     VidSchSwitchFromContext @ 0x1C0086300 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C0086510 (VidSchSuspendAdapter.c)
 *     VidSchiSuspendFlipQueues @ 0x1C0086ED0 (VidSchiSuspendFlipQueues.c)
 *     VidSchSwitchFromDevice @ 0x1C0087FD0 (VidSchSwitchFromDevice.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00EAB78 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     VidSchiSetPriorityContext @ 0x1C00048C4 (VidSchiSetPriorityContext.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006E60 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00ADF10 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  struct _VIDSCH_CONTEXT **v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  __int64 QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (struct _VIDSCH_CONTEXT **)(a1 + 248);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(struct _VIDSCH_CONTEXT ***)(a2 + 48);
  v5 = *v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1LL);
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
