/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1C00F4192
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00BDFCC (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16008);
  if ( (unsigned int)(*(_DWORD *)(v5 + 104) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 535);
  v6 = *(_DWORD *)(v5 + 108);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v5 + 104));
  if ( a1 && *(_WORD *)(a1 + 20) > 0x60u )
    return (unsigned int)EngMulDiv(v6, *(unsigned __int16 *)(a1 + 20), 96);
  return v6;
}
