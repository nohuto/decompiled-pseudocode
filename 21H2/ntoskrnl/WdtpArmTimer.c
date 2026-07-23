/*
 * XREFs of WdtpArmTimer @ 0x14026DB20
 * Callers:
 *     PnpEnableWatchdog @ 0x14066AC94 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
