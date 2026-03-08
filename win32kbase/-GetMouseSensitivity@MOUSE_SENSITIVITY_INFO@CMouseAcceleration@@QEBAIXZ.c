/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00BDFCC
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00BDF70 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C00F4192 (GetNormalizedMouseSensitivityFactor.c)
 *     GetMouseSensitivity @ 0x1C0217970 (GetMouseSensitivity.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C02192C4 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C02194BC (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this)
{
  if ( (unsigned int)(*(_DWORD *)this - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 528LL);
  return *(unsigned int *)this;
}
