/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C0025258
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0003F70 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C0044CDC (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C0085808 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C03025A0 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-1073741675;
  }
  return v3;
}
