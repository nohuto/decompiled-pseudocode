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
        v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C64C30);
      }
      PfpServiceMainThreadUnboost(0LL);
      goto LABEL_21;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
        PfpLogScenarioEvent(1, 2, 1, dword_140C64C64, 0);
LABEL_14:
      v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
         + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_21:
      PfLogEvent(
        28,
        dword_140C64C2C
      + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
        + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
        &v7,
        8u);
      return;
    }
    if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
      PfpPowerActionStartScenarioTracing(&qword_140C64C30);
    if ( dword_140C64C60 == 5 )
      PfSnBeginBootPhase(4u);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30, 1, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30, 2, 0, 0LL);
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30, 5, 0, 0LL);
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
    PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C64C30, 0, v3, 0LL);
  }
}
