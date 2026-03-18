/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C014F504
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0166CD0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserNotifyUniversalScaleFactorChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, v4);
  GreIncrementDisplaySettingsUniqueness(v5);
  if ( qword_1C0295EE0 )
    qword_1C0295EE0(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, 0LL);
}
