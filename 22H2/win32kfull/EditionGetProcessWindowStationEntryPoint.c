/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1C000EE90
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(a1, v2);
  return UserSessionSwitchLeaveCrit(v3);
}
