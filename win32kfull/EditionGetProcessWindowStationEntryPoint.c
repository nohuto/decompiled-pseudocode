/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1C00DA870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx

  EnterSharedCrit(a1, a2, a3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 664);
  return UserSessionSwitchLeaveCrit(v6);
}
