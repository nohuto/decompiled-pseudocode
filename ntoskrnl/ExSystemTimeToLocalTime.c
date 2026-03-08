/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1402D10F0
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     HalEfiSetTime @ 0x14050AE70 (HalEfiSetTime.c)
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085A0F4 (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140930198 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x140989298 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098CF00 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409937B8 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AA7AF4 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B70018 (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v5 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v5 = &PspHostSiloGlobals;
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(v5[157] + 440LL);
}
