/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C00AE0A4
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00131F8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C0086720 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00A5470 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00ADCEC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C00B21F0 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4C32 (VidSchiAllocateHwQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00EBBC4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00F05A8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  _QWORD *v13; // rdx

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  v4 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 32) = v4 | 0x20;
  v5 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( !v5 )
  {
    if ( (v4 & 2) != 0 )
    {
      v7 = *(_QWORD *)(a2 + 24) + 376LL;
    }
    else if ( (v4 & 4) != 0 )
    {
      v7 = *(_QWORD *)(a2 + 24) + 328LL;
    }
    else if ( (v4 & 1) != 0 )
    {
      v12 = *(unsigned int *)(a2 + 48);
      v13 = *(_QWORD **)(a1 + 632);
      if ( (unsigned int)v12 < *(_DWORD *)(a1 + 704) )
        v13 += v12;
      v7 = *v13 + 408LL;
    }
    else
    {
      v7 = a1 + 1640;
    }
    goto LABEL_4;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = a1 + 1656;
LABEL_4:
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1744), v7, (_QWORD *)a2, 0LL);
    return;
  }
  v8 = v6 - 2;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v7 = v9 + 136;
    if ( !v9 )
      v7 = a1 + 1672;
    goto LABEL_4;
  }
  v10 = v8 - 1;
  if ( !v10 )
  {
    v7 = *(_QWORD *)(a2 + 24) + 120LL;
    goto LABEL_4;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v7 = a1 + 1688;
    goto LABEL_4;
  }
  if ( v11 == 1 )
  {
    v7 = *(_QWORD *)(a2 + 24) + 168LL;
    goto LABEL_4;
  }
}
