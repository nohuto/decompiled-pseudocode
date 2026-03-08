/*
 * XREFs of ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0009F90 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchSetMonitorPowerState @ 0x1C000FA60 (VidSchSetMonitorPowerState.c)
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C0034818 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C0034940 (-GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C0011828 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1C003A058 (McTemplateK0xx_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  int v4; // ebx

  v4 = a3;
  if ( (byte_1C00769C4 & 1) != 0 )
    McTemplateK0xx_EtwWriteTransfer(this, a2, a3, (unsigned int)a2, (unsigned int)a3);
  *((double *)this + 4) = (double)v4;
  LinearFitT<256>::Reset(this, a2, a3);
}
