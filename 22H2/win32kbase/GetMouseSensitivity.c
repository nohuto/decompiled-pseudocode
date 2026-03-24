/*
 * XREFs of GetMouseSensitivity @ 0x1C01AE770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00A4C60 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetMouseSensitivity(_DWORD *a1)
{
  CDeviceAcceleration *v1; // rbx

  v1 = qword_1C0245098;
  if ( a1 )
  {
    if ( (unsigned int)(*((_DWORD *)qword_1C0245098 + 26) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 535);
    *a1 = *((_DWORD *)v1 + 27);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)v1 + 104));
}
