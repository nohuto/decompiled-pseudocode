/*
 * XREFs of HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath @ 0x1C0008480
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_BugcheckSystemOnBootHubFailure @ 0x1C000EEF8 (HUBFDO_BugcheckSystemOnBootHubFailure.c)
 */

void __fastcall __noreturn HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath(__int64 a1)
{
  HUBFDO_BugcheckSystemOnBootHubFailure(*(_QWORD *)(a1 + 960));
}
