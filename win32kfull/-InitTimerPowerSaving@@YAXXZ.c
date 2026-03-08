/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C00794AC
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse");
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing");
}
