/*
 * XREFs of IsWerReportCreatePresent @ 0x140006734
 * Callers:
 *     ??0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z @ 0x14000DC38 (--0CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@PEBG00@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400069D0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWerReportCreatePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140016870 == 1 )
    return 1;
  if ( dword_140016870 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_140016870 = 2 - (v1 != 0);
  return result;
}
