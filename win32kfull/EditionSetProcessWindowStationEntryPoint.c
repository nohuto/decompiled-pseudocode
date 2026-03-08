/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x1C00CE950
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00CEA20 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 1;
  EnterCrit(1LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 664);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v7 = PsGetCurrentProcessWin32Process(v6);
    if ( v7 )
    {
      v6 = -*(_QWORD *)v7;
      v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
    }
    if ( v5 != *(_QWORD *)(v7 + 664) )
    {
      v8 = PsGetCurrentProcessWin32Process(v6);
      if ( v8 )
      {
        v6 = -*(_QWORD *)v8;
        v8 &= -(__int64)(*(_QWORD *)v8 != 0LL);
      }
      *(_DWORD *)(v8 + 812) |= 0x4000000u;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
