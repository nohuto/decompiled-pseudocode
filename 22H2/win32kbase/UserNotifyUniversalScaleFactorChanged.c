/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C0139C84
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C01471C0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B32F0 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
  GreIncrementDisplaySettingsUniqueness();
  if ( qword_1C0256AD0 )
    qword_1C0256AD0(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
}
