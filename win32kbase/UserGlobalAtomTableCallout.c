__int64 UserGlobalAtomTableCallout()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 ProcessWin32WindowStation; // rdx
  _QWORD *i; // rax
  __int64 v20; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v7 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL);
      if ( (*(_DWORD *)(v4 + 24) & 0x20) != 0 )
        return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL) + 16LL);
    }
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v10 = ProcessJob;
  if ( !v7 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    if ( (unsigned int)ApiSetEditionIsPerJobObjectAtomTableSupported() )
    {
      for ( i = gpJobsList; i && i[1] != v10; i = (_QWORD *)*i )
        ;
      return i[2];
    }
    if ( (unsigned __int8)IsProcessWin32kLockedOut(-1LL) )
    {
      UserSetLastError(5);
      return v0;
    }
  }
  if ( qword_1C02D7000 )
  {
    if ( (int)qword_1C02D7000() >= 0 )
    {
      v15 = PsGetCurrentProcess(v12, v11, v13, v14);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v15);
      if ( qword_1C02D7008 )
      {
        if ( (int)qword_1C02D7008(CurrentThread, ProcessWin32WindowStation, 32LL, &v22, 1) >= 0 )
          return *(_QWORD *)(v22 + 168);
      }
    }
  }
  if ( ((unsigned __int8)IsProcessWin32kLockedOut(-1LL)
     || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v20)) == 0LL
     || !*CurrentProcessWin32Process
     || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked())
    && qword_1C02D7010
    && (int)qword_1C02D7010() >= 0
    && qword_1C02D7018 )
  {
    return qword_1C02D7018();
  }
  return v0;
}
