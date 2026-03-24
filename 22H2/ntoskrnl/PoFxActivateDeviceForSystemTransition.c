/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140383500
 * Callers:
 *     PopNotifyDevice @ 0x1409930F0 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
