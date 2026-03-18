/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C00071C0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C0003E8C (VidSchiCreateContextInternal.c)
 *     VidSchiFreeQueuePacket @ 0x1C00044A4 (VidSchiFreeQueuePacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00091C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0018654 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC9C (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0043F00 (VidSchCreateHwQueue.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0088184 (VidSchRegisterCompletionEvent.c)
 *     VidSchiCreateDeviceInternal @ 0x1C00900F0 (VidSchiCreateDeviceInternal.c)
 *     VidSchSubmitCommand @ 0x1C00AD620 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00ADF10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiCreateNode @ 0x1C00B88FC (VidSchiCreateNode.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4732 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
