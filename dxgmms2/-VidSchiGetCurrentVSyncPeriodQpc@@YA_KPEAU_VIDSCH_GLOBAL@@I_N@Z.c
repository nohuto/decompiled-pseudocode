/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0009F90 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0034EA0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C003A394 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003D700 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003EA40 (VidSchCreatePeriodicFrameNotification.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C004A744 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriodQpc(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned int v15; // [rsp+78h] [rbp+38h] BYREF

  v5 = *((_QWORD *)a1 + a2 + 400);
  v6 = *(_DWORD *)(v5 + 3032);
  if ( v6 != -1 )
  {
    if ( !v6 || v6 == *(_DWORD *)(v5 + 82936) )
    {
      if ( *(_DWORD *)(v5 + 82936) )
      {
        v13 = *((_QWORD *)a1 + 328);
        if ( is_mul_ok(*(unsigned int *)(v5 + 82936), v13) )
          LODWORD(v7) = *(unsigned int *)(v5 + 82936) * v13 / 0x989680;
        else
          LODWORD(v7) = v13 * (*(_DWORD *)(v5 + 82936) / 0x989680u)
                      + v13 * (*(unsigned int *)(v5 + 82936) % 0x989680uLL) / 0x989680;
      }
      else
      {
        LODWORD(v7) = *(_DWORD *)(v5 + 82952);
      }
      v15 = 0;
      if ( !a3
        || !*((_BYTE *)a1 + 6634)
        || VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44248), v7, &v15) < 0 )
      {
        return (unsigned int)v7;
      }
      if ( (byte_1C00769C4 & 1) != 0 )
      {
        v14 = *((_QWORD *)a1 + 328);
        v10 = *(unsigned int *)(v5 + 3032);
        v11 = v10 * v14;
        if ( !is_mul_ok(v10, v14) )
        {
          v11 = v14 * (v10 / 0x989680);
          v10 = v14 * (v10 % 0x989680);
          v12 = v11 + v10 / 0x989680;
          goto LABEL_27;
        }
LABEL_26:
        v12 = v11 / 0x989680;
        goto LABEL_27;
      }
    }
    else
    {
      v9 = *((_QWORD *)a1 + 328);
      if ( is_mul_ok(*(unsigned int *)(v5 + 3032), v9) )
        v7 = *(unsigned int *)(v5 + 3032) * v9 / 0x989680;
      else
        v7 = v9 * (*(unsigned int *)(v5 + 3032) % 0x989680uLL) / 0x989680
           + v9 * (*(unsigned int *)(v5 + 3032) / 0x989680uLL);
      v15 = 0;
      if ( !a3
        || !*((_BYTE *)a1 + 6634)
        || VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44248), v7, &v15) < 0 )
      {
        return (unsigned int)v7;
      }
      if ( (byte_1C00769C4 & 1) != 0 )
      {
        v11 = *(unsigned int *)(v5 + 3032) * *((_QWORD *)a1 + 328);
        if ( !is_mul_ok(*(unsigned int *)(v5 + 3032), *((_QWORD *)a1 + 328)) )
        {
          v11 = 10000000 * (*(unsigned int *)(v5 + 3032) / 0x989680uLL);
          v10 = *((_QWORD *)a1 + 328) * (*(unsigned int *)(v5 + 3032) / 0x989680uLL);
          LOBYTE(v12) = v10 + *((_QWORD *)a1 + 328) * (*(unsigned int *)(v5 + 3032) % 0x989680uLL) / 0x989680;
LABEL_27:
          LODWORD(v7) = v15;
          McTemplateK0qxxx_EtwWriteTransfer(
            v11,
            (unsigned int)&EventVSyncSmoothenedPeriod,
            v10,
            a2,
            v15,
            *(_QWORD *)(v5 + 82952),
            v12);
          return (unsigned int)v7;
        }
        goto LABEL_26;
      }
    }
    LODWORD(v7) = v15;
    return (unsigned int)v7;
  }
  return *(_QWORD *)(v5 + 82952);
}
