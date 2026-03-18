/*
 * XREFs of UpdateMouseSensitivity @ 0x1C00BE580
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C00BE5B4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610 (BroadcastSettingsUpdateToAllContainers.c)
 */

__int64 __fastcall UpdateMouseSensitivity(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( a1 - 1 > 0x13 )
    v1 = *((_DWORD *)qword_1C0288098 + 24);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CDeviceAcceleration *)((char *)qword_1C0288098 + 104),
    v1);
  return BroadcastSettingsUpdateToAllContainers();
}
