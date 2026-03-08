/*
 * XREFs of EditionCloseWindowStationEntryPoint @ 0x1C00F5CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionCloseWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(1LL, 0LL);
  LOBYTE(v2) = 1;
  LODWORD(a1) = _CloseWindowStation(a1, v2);
  UserSessionSwitchLeaveCrit(v3);
  return (unsigned int)a1;
}
