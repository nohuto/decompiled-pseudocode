/*
 * XREFs of WerpProcessId @ 0x180061E0C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x1800DDB80 (WerpWaitForCrashReporting.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
