/*
 * XREFs of PfpLogScenarioEvent @ 0x14073A758
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14073A2C8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14028D0D0 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x1402B896C (PfTSetTraceWorkerPriority.c)
 *     PfTAccessTracingCheck @ 0x1402B8A04 (PfTAccessTracingCheck.c)
 *     PfGenerateTrace @ 0x14073A870 (PfGenerateTrace.c)
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int64 v6; // r14
  signed int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = 0LL;
  v6 = a1;
  if ( !(unsigned int)PfTAccessTracingCheck((__int64)&PfTGlobals) )
    MmPerformMemoryListCommand(1LL);
  v9 = PfTSetTraceWorkerPriority(0x10u);
  PfGenerateTrace(&Thread, 1LL);
  v11 = v6;
  LODWORD(v12) = a2 & 3 | v12 & 0xFFF00000 | (4 * (a4 | ((a3 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_140C64C2C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
             &v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v9 <= 31 )
    return PfTSetTraceWorkerPriority(v9);
  return result;
}
