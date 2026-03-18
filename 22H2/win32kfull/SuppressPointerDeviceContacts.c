/*
 * XREFs of SuppressPointerDeviceContacts @ 0x1C013B8BC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 * Callees:
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x1C013B78C (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

NTSTATUS SuppressPointerDeviceContacts()
{
  return ResetPointerDevices(1LL);
}
