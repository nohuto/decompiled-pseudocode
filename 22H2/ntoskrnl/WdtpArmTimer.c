/*
 * XREFs of WdtpArmTimer @ 0x1403488F0
 * Callers:
 *     PnpEnableWatchdog @ 0x1406F0344 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x140349080 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
