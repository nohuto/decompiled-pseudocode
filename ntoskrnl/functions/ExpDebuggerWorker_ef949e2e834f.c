void ExpDebuggerWorker()
{
  _KPROCESS *v0; // r14
  __int64 v1; // r15
  char v2; // r12
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 *NextProcess; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h]
  $115DCDF994C6370D29323EAB0E0C9502 v14; // [rsp+30h] [rbp-40h] BYREF

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  memset(&v14, 0, sizeof(v14));
  DefaultPagePriority = MmGetDefaultPagePriority();
  v12 = ExpDebuggerPageIn;
  v13 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v7);
      v5 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == (__int64 *)v0 )
      {
        KiStackAttachProcess(v0, 0, (__int64)&v14);
        if ( v5 )
          goto LABEL_3;
        break;
      }
      v7 = NextProcess;
      if ( NextProcess == (__int64 *)v1 )
      {
        PsTerminateProcess((struct _KPROCESS *)NextProcess, 0x40010004u);
        goto LABEL_30;
      }
    }
    v9 = v1;
    if ( v0 )
      v9 = (__int64)v0;
    DbgPrintEx(
      0,
      0,
      "EX debug work: Unable to find process %p\n",
      v9,
      v12,
      v13,
      *(_OWORD *)v14.SavedApcState.ApcListHead,
      *(_OWORD *)&v14.SavedApcStateFill[16],
      *(_OWORD *)&v14.SavedApcStateFill[32]);
  }
LABEL_3:
  v6 = v12;
  if ( v12 )
  {
    if ( MmIsSessionAddress(v12) )
      v10 = -3LL;
    else
      v10 = -(__int64)(v12 < 0xFFFF800000000000uLL);
    v11 = MmPrefetchVirtualMemory((char *)v10, 1uLL, (__int64)&v12, v4);
    if ( v11 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v11);
    v6 = v12;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v6 = v12;
  }
  if ( v0 || v1 || v6 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    KiUnstackDetachProcess(&v14);
LABEL_30:
    PsQuitNextProcessThread(v5);
  }
}
