/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1C00ADD4C
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C00131F8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0047148 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C0086720 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00A46E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00A5470 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C00ADBDC (VidSchiAllocateDmaPacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00ADCEC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C00B21F0 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4C32 (VidSchiAllocateHwQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00EBBC4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00F05A8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C01072AC (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0107370 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x1C0007A30 (VidSchiCheckTimeoutForced.c)
 *     VidSchWaitForEvents @ 0x1C0014E64 (VidSchWaitForEvents.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchiReportHwHang @ 0x1C00475B8 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010667C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // r13
  int v18; // r14d
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = 0LL;
  if ( (_DWORD)a3 != -1 && bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, &EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v15 = *(unsigned int *)(a2 + 48);
    v16 = *(__int64 **)(a1 + 632);
    if ( (unsigned int)v15 < *(_DWORD *)(a1 + 704) )
      v16 += v15;
    v6 = *v16;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(int *)(a2 + 16);
      if ( v12 )
      {
        v7 = 56 * v13 + v12 + 320;
      }
      else
      {
        v14 = 56 * v13;
        if ( (v5 & 1) != 0 )
          v7 = v6 + v14 + 240;
        else
          v7 = v14 + a1 + 1416;
      }
    }
    *(_QWORD *)(a2 + 72) = v7;
    *(_DWORD *)(a2 + 64) = 1;
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v22 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v22, VidSchiCheckTimeoutForced(a1)) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 168)
       || !v6
       || !*(_DWORD *)(v6 + 2028) && !*(_DWORD *)(v6 + 2032)) )
    {
      return v10;
    }
    v17 = 0LL;
    if ( v9 )
    {
      v18 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v18 = 3;
    }
    else
    {
      v18 = 2;
      v17 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 436LL) & 0x200) != 0 )
    {
      v19 = __rdtsc();
      v20 = __readmsr(0x400000F6u);
      v21 = 10 * (v19 - v20) / *((unsigned int *)KeGetCurrentPrcb() + 17);
      WdLogSingleEntry3(8LL, v20, v19, v21);
      if ( v20 > v19 || v21 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( !VidSchIsTDRPending(a1) && v18 == 2 && *(_BYTE *)(a1 + 44) )
    {
      if ( !v6 )
        goto LABEL_59;
      if ( *(_DWORD *)(v6 + 2032) )
        goto LABEL_56;
      v23 = 0LL;
      if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v6, &v23) || !(unsigned __int8)VidSchiResetEngines(v6, v23) )
      {
        v18 = 9;
        *(_DWORD *)(v6 + 2028) = 0;
        *(_BYTE *)(v6 + 2026) = 0;
        goto LABEL_59;
      }
      *(_DWORD *)(v6 + 2028) = 0;
      *(_BYTE *)(v6 + 2026) = 0;
    }
    else
    {
      if ( !v6 )
        goto LABEL_59;
      if ( v18 == 2 )
      {
LABEL_56:
        if ( *(_DWORD *)(v6 + 2032) )
          v18 = (*(_BYTE *)(v6 + 2025) != 0) + 10;
      }
      *(_BYTE *)(v6 + 2025) = 0;
      *(_DWORD *)(v6 + 2028) = 0;
      *(_BYTE *)(v6 + 2026) = 0;
      *(_DWORD *)(v6 + 2032) = 0;
LABEL_59:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v18, v17) )
        return v10;
    }
  }
}
