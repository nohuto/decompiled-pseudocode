/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1C00CEC00
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  EnterSharedCrit(a1, a2, a3);
  GetProcessWindowStation(a1);
  return UserSessionSwitchLeaveCrit(v4);
}
