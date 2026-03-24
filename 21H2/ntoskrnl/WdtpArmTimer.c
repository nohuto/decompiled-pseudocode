/*
 * XREFs of WdtpArmTimer @ 0x14027F8E0
 * Callers:
 *     PnpEnableWatchdog @ 0x140677554 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x140280070 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
