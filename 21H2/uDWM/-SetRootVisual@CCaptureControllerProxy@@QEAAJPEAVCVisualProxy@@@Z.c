/*
 * XREFs of ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800BE558
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F880 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008FA60 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008FC80 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090B30 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C70 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090DB0 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x180091420 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800915D0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetRootVisual(CCaptureControllerProxy *this, struct CVisualProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1064LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
