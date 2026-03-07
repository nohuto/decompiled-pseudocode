__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  __int64 CurrentProcessWin32Process; // rax
  PEPROCESS *v7; // rcx
  __int64 v8; // rdi
  int ProcessLuid; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (PEPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = (PEPROCESS *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v8 + 64) & 2) == 0 || PsGetProcessId(*v7) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v11 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v11);
  if ( ProcessLuid >= 0 )
  {
    if ( v11 == *(_QWORD *)(v8 + 176) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_9;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_9:
  UserSetLastError(170);
  return (unsigned int)ProcessLuid;
}
