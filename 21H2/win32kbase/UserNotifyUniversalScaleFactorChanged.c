/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C0166FE4
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0173EB0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId);
  GreIncrementDisplaySettingsUniqueness();
  if ( qword_1C029C810 )
    qword_1C029C810(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0LL, 0LL, 0LL);
}
