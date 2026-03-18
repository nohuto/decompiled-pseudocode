/*
 * XREFs of VidSchiInterlockedRemoveEntryList @ 0x1C00045B8
 * Callers:
 *     VidSchiFreeQueuePacket @ 0x1C00044A4 (VidSchiFreeQueuePacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC9C (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00862A0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0087DCC (VidSchiWaitFlushCompletion.c)
 *     VidSchSubmitCommand @ 0x1C00AD620 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00ADF10 (VidSchiAllocateQueuePacket.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C00B1540 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4732 (VidSchiAllocateHwQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00EB854 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00F0238 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchUnregisterCompletionEvent @ 0x1C0108DEC (VidSchUnregisterCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiInterlockedRemoveEntryList(KSPIN_LOCK *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  bool v7; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = v6 == v5;
  if ( a3 )
    --*a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
