/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x1405851B4
 * Callers:
 *     PopNotifyDevice @ 0x140AA415C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}
