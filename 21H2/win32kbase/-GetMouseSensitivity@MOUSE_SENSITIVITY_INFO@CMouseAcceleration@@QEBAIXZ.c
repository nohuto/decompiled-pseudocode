/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00B5160
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00B4FE0 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     GetMouseSensitivity @ 0x1C01E7B00 (GetMouseSensitivity.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01E7BA4 (GetNormalizedMouseSensitivityFactor.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E8A48 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01E8C74 (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx

  v3 = *(unsigned int *)this;
  if ( (unsigned int)(v3 - 1) > 0x13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, a3);
    LODWORD(v3) = *(_DWORD *)this;
  }
  return (unsigned int)v3;
}
