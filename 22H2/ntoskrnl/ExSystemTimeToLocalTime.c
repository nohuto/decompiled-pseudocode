/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14033B0F0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033AF30 (HalQueryRealTimeClock.c)
 *     HalEfiSetTime @ 0x14050CF50 (HalEfiSetTime.c)
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DFE4 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1409330C8 (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x14098C348 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14098FFB0 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x140996868 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAD24 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140B37C28 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
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
