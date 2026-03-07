// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // rax
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  int v10; // ebx
  int v11; // ecx
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rdi
  char v14; // di
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  GetProcessLuid(Thread, &v15);
  v4 = *a2;
  if ( v15 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(ThreadProcess);
  v8 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
    return 3221225480LL;
  v9 = ProcessWin32Process[82];
  if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    goto LABEL_6;
  v5 &= ~0x200u;
  *a2 = v5;
  if ( !v9 )
    return 3221225480LL;
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v8 + 168), 0x40u) )
    return 3221225506LL;
  if ( (v5 & 1) != 0 )
  {
    if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
      return 3221225569LL;
  }
  else if ( (*(_DWORD *)(v9 + 64) & 4) != 0 )
  {
    return 3221225488LL;
  }
LABEL_6:
  if ( gdwThreadEndSession )
  {
    if ( v15 == *(_QWORD *)(grpwinstaLogoff + 176LL) || gpidEndSession == (void *)gpidLogon )
    {
      v14 = v5 & ~(_BYTE)gdwShutdownFlags & 7;
      if ( !v14 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
        return 259LL;
      if ( (v5 & 1) == 0 && v9 != grpwinstaLogoff )
        return 2147483665LL;
      if ( (v14 & 4) == 0 )
        return 259LL;
    }
    return 3221226029LL;
  }
  else
  {
    if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    {
LABEL_8:
      v10 = v5 | 0x200;
      *a2 = v10;
      gdwShutdownFlags = v10;
      gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpsi + 2236LL) |= 1u;
      gpidEndSession = (void *)PsGetCurrentThreadProcessId();
      LockObjectAssignment(grpwinstaLogoff, v9);
      v11 = *(_DWORD *)(v9 + 64);
      *(_QWORD *)(v9 + 176) = v15;
      gdwLocks = v11 & 3;
      result = 0LL;
      *(_DWORD *)(v9 + 64) = v11 | 0xA;
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    if ( (v5 & 0x8000) != 0 )
    {
      v5 &= ~0x8000u;
      *a2 = v5;
    }
    if ( (unsigned int)NotifyLogon(v5) )
      return 259LL;
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 904) )
      goto LABEL_8;
    return 3221225688LL;
  }
}
