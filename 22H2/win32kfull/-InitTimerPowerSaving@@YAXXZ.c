/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C003CF3C
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse");
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing");
}
