/*
 * XREFs of UpdateMouseSensitivity @ 0x1C009D040
 * Callers:
 *     UnpackMouseSettings @ 0x1C02194BC (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C009D090 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C009D0B0 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

__int64 __fastcall UpdateMouseSensitivity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = a1;
  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16008);
  if ( v4 - 1 > 0x13 )
    v4 = *(_DWORD *)(v5 + 96);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v5 + 104),
    v4);
  return BroadcastSettingsUpdateToAllContainers();
}
