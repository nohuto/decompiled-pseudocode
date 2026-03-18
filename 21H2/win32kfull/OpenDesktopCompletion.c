/*
 * XREFs of OpenDesktopCompletion @ 0x1C00D0E3C
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00CE790 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C00CEF78 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01E418C (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v9; // rdx
  int ProcessLuid; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process(a1);
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v7 + 64) & 2) == 0 || PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v11 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v11);
  if ( ProcessLuid >= 0 )
  {
    if ( v11 == *(_QWORD *)(v7 + 176) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_7;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_7:
  UserSetLastError(170LL, v9);
  return (unsigned int)ProcessLuid;
}
