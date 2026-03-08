/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C017CCD4
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0193A60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserNotifyUniversalScaleFactorChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, v4);
  GreIncrementDisplaySettingsUniqueness(v5);
  if ( qword_1C02D7058 )
    qword_1C02D7058(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, 0LL);
}
