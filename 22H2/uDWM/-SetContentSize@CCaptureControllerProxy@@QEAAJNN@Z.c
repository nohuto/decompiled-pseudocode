/*
 * XREFs of ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800BE2B4
 * Callers:
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800924B0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092560 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetContentSize(CCaptureControllerProxy *this, double a2, double a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1088LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
