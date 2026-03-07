__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx

  v4 = 0;
  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    UserSetLastError(12);
  }
  else
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *a1 = *(_DWORD *)(v7 + 816);
    return 1;
  }
  return v4;
}
