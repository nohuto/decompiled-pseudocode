/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x1C01A79D4
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01A7950 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     <none>
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(void *a1, int a2)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1);
  return CBaseInput::FindDeviceInfo(*(CBaseInput **)(v4 + 16840), a1, a2);
}
