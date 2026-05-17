/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800DDB08
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18009D860 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  if ( a1 )
    return NtSetInformationProcess();
  else
    return 3221225711LL;
}
