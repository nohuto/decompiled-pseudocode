/*
 * XREFs of ResetAccelerationCurves @ 0x1C00143D0
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0012FE8 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C015CC04 (_SetPrecisionTouchPadConfiguration.c)
 *     UnpackMouseSettings @ 0x1C02194BC (UnpackMouseSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0014408 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = (int)a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  CDeviceAcceleration::ResetAccelerationCurves(*(CDeviceAcceleration **)(v5 + 24 * (v4 + 667)));
}
