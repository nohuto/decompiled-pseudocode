/*
 * XREFs of _tlgKeywordOn @ 0x14000DB68
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000C764 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D484 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_140016010 & 0x800000000000LL) != 0 && (qword_140016018 & 0x800000000000LL) == qword_140016018;
}
