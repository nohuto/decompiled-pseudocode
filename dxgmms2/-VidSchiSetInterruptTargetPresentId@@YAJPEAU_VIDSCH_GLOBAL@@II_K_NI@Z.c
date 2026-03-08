/*
 * XREFs of ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0017DD8 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00410D0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1C00489D8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C0049770 (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x1C004A06C (-VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAU.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A5F00 (VidSchIsVSyncEnabled.c)
 *     VidSchiFlushPendingFlips @ 0x1C00AE270 (VidSchiFlushPendingFlips.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C010966C (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C000EA94 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C004829C (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x1C004B204 (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     McTemplateK0pqqqxq_EtwWriteTransfer @ 0x1C004B4C4 (McTemplateK0pqqqxq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSetInterruptTargetPresentId(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v11; // r11
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  enum _DXGK_CRTC_VSYNC_STATE v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r12d
  bool v26; // [rsp+50h] [rbp-59h]
  _BYTE v27[3]; // [rsp+51h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-55h]
  _QWORD v29[4]; // [rsp+58h] [rbp-51h] BYREF
  __int16 v30; // [rsp+78h] [rbp-31h]
  struct _VIDSCH_GLOBAL *v31; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-21h]
  unsigned int v33; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 v34; // [rsp+90h] [rbp-19h]
  __int64 v35; // [rsp+98h] [rbp-11h]

  v6 = 0;
  v28 = a3;
  v11 = a3;
  v12 = *((_QWORD *)a1 + a2 + 400);
  v13 = 288LL * a3;
  v26 = 0;
  v29[0] = (char *)a1 + 1728;
  v30 = 0;
  if ( a5 )
  {
    AcquireSpinLock::Acquire((Acquire *)v29);
    v11 = a3;
  }
  if ( a4 <= *(_QWORD *)(v13 + v12 + 392) )
  {
    if ( a4 < *(_QWORD *)(v13 + v12 + 400) )
      a4 = *(_QWORD *)(v13 + v12 + 400);
  }
  else if ( (unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), a2)
         || *((_DWORD *)a1 + 5 * v14 + 475)
         || *((_DWORD *)a1 + 203) )
  {
    a4 = *(_QWORD *)(v13 + v12 + 400);
  }
  else
  {
    a4 = *(_QWORD *)(v13 + v12 + 392);
    if ( *(_DWORD *)(v13 + v12 + 196) <= a6 + *(_DWORD *)(v13 + v12 + 200) )
    {
      a4 += a6 + 1LL;
      v26 = VidSchiVSyncDisabledOnAllPlanes(a1, (struct _VIDSCH_PRESENT_INFO *)v12, a3);
    }
  }
  v15 = *(_QWORD *)(v13 + v12 + 424);
  if ( v15 != a4 )
  {
    v16 = *(_QWORD *)(v12 + 8 * v11 + 3096);
    v17 = v16 < v15 ? DXGK_VSYNC_DISABLE_NO_PHASE : DXGK_VSYNC_ENABLE;
    v18 = v16 >= a4 ? 2 : 0;
    if ( v18 != v17 )
      VSYNC_TIME_STATS::VSyncStateChange((VSYNC_TIME_STATS *)(v12 + 78496), v17, v18);
    v19 = *((unsigned int *)a1 + 8);
    v20 = *((_QWORD *)a1 + 3);
    v35 = 0LL;
    v31 = a1;
    v32 = a2;
    v33 = a3;
    v34 = a4;
    v27[0] = 0;
    DpSynchronizeExecution(v20, VidSchiSetInterruptTargetPresentIdAtISR, &v31, v19, v27);
    v24 = v35;
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqqxq_EtwWriteTransfer(
        v22,
        v21,
        v23,
        *((_QWORD *)a1 + 2),
        a2,
        v28,
        *(_DWORD *)(v13 + v12 + 196),
        a4,
        v35);
    if ( v24 < 0 )
    {
      if ( g_BreakOnSetInterruptTargetPresentIdErrors && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "The GPU Scheduler detected driver failing to set interrupt target PresentId.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "VidPnSourceId = %d.\n"
          "Plane = %d.\n"
          "InterruptTargetPresentId = 0x%I64x.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnSetInterruptTargetPresentIdErrors=0\" com"
          "mand,\n"
          "or \"ed 0x%p 0\"\n"
          "\n",
          a2,
          v28,
          a4,
          (const void *)&g_BreakOnSetInterruptTargetPresentIdErrors);
        __debugbreak();
      }
      v24 = 0;
    }
    *(_QWORD *)(v13 + v12 + 424) = a4;
    if ( v26 )
    {
      if ( *((_BYTE *)a1 + 2212) )
      {
        *((_DWORD *)a1 + 567) |= 1 << a2;
        if ( *((_DWORD *)a1 + 566) != 1 )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2232), CriticalWorkQueue);
          *((_DWORD *)a1 + 566) = 1;
        }
      }
      else if ( !_InterlockedExchange((volatile __int32 *)a1 + 566, 1) )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2232), CriticalWorkQueue);
      }
    }
    v6 = v24;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v29);
  return v6;
}
