/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x1C01D0EC4
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01D0E40 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     <none>
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(void *a1, int a2)
{
  return CBaseInput::FindDeviceInfo(gpHidInput, a1, a2);
}
