/*
 * XREFs of WdtpArmTimer @ 0x140203F20
 * Callers:
 *     WdtpTimerCallback @ 0x140671BB0 (WdtpTimerCallback.c)
 *     PnpWatchdogTimerStart @ 0x14068A9C4 (PnpWatchdogTimerStart.c)
 * Callees:
 *     ExSetTimer @ 0x1402042A0 (ExSetTimer.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1, int a2)
{
  *(_QWORD *)(a1 + 120) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 128) = a2;
  return ExSetTimer(*(_QWORD *)(a1 + 48));
}
