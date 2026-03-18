/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14033B0A0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033AF30 (HalQueryRealTimeClock.c)
 *     HalSetRealTimeClock @ 0x1404FED20 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050CABC (HalEfiGetTime.c)
 *     HalpSetResumeTime @ 0x14051C788 (HalpSetResumeTime.c)
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x140932DF0 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x140996868 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 *     GetBootSystemTime @ 0x140B37C28 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v5 = &PspHostSiloGlobals;
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(v5[157] + 440LL);
}
