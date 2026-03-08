/*
 * XREFs of SuppressPointerDeviceContacts @ 0x1C012E424
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C012E290 (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

NTSTATUS SuppressPointerDeviceContacts()
{
  return ResetPointerDevices(1LL);
}
