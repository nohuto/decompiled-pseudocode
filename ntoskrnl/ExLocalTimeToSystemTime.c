/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1402D10A0
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     HalSetRealTimeClock @ 0x1404FCC40 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050A9DC (HalEfiGetTime.c)
 *     HalpSetResumeTime @ 0x14051A258 (HalpSetResumeTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x14092FEC0 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409937B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A850B4 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B70018 (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
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
