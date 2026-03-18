/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x1C00EC400
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00EC4A0 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  EnterCrit(1LL, 0LL);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3) + 672);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0;
  }
  else if ( v4 != *(_QWORD *)(PsGetCurrentProcessWin32Process(v5) + 672) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x4000000u;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
