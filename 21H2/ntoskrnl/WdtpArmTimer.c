/*
 * XREFs of WdtpArmTimer @ 0x1402D3D0C
 * Callers:
 *     PnpEnableWatchdog @ 0x14074ECA8 (PnpEnableWatchdog.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}
