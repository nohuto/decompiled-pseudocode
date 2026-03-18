/*
 * XREFs of PfPowerActionNotify @ 0x140A9FF34
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A7164 (PopUmpoProcessPowerMessage.c)
 *     PfpProcessScenarioPhase @ 0x1407D3BD0 (PfpProcessScenarioPhase.c)
 *     PopDispatchSuperfetchNotification @ 0x140989840 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopUmpoSendLegacyEvent @ 0x140997950 (PopUmpoSendLegacyEvent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfLogEvent @ 0x14028BF68 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x14035E7B0 (PfTSetTraceWorkerPriority.c)
 *     PfTAccessTracingCheck @ 0x14035E848 (PfTAccessTracingCheck.c)
 *     PfpServiceMainThreadUnboost @ 0x140582FB0 (PfpServiceMainThreadUnboost.c)
 *     PfpLogScenarioEvent @ 0x1407D4068 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1407D4180 (PfGenerateTrace.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140AA0194 (PfpPowerActionStartScenarioTracing.c)
 *     PfpScenCtxPrefetchWait @ 0x140AA0414 (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140AA06B4 (PfpStartLoggingHardFaultEvents.c)
 */

void __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  signed int v6; // ebx
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v8 = 0;
  v3 = 1;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
    {
      if ( (unsigned int)(a3 - 2) > 3 )
        return;
      if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
      {
        MmPerformMemoryListCommand();
        v6 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace((__int64)&Thread, 1);
        if ( v6 <= 31 )
          PfTSetTraceWorkerPriority(v6);
        v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C650B0);
      }
      PfpServiceMainThreadUnboost(0LL);
      goto LABEL_21;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
        PfpLogScenarioEvent(1, 2, 1, dword_140C650E4, 0);
LABEL_14:
      v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
         + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_21:
      PfLogEvent(
        28,
        dword_140C650AC
      + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
        + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
        &v7,
        8u);
      return;
    }
    if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
      PfpPowerActionStartScenarioTracing(&qword_140C650B0);
    if ( dword_140C650E0 == 5 )
      PfSnBeginBootPhase(4u);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C650B0, 1, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C650B0, 2, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C650B0, 5, 0, 0LL);
    if ( (int)PfpStartLoggingHardFaultEvents() >= 0 )
      goto LABEL_14;
  }
  else
  {
    if ( (unsigned int)(a3 - 2) > 2 )
    {
      if ( a3 != 5 )
        return;
      v3 = (a2 & 4) != 0 ? 5 : 2;
    }
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C650B0, 0, v3, 0LL);
  }
}
