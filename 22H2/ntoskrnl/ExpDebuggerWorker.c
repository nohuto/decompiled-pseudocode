/*
 * XREFs of ExpDebuggerWorker @ 0x1409B5030
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x14026E790 (MmGetDefaultPagePriority.c)
 *     MmIsSessionAddress @ 0x1402C9800 (MmIsSessionAddress.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8FCC (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140406F30 (DbgBreakPointWithStatus.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 *     PsQuitNextProcessThread @ 0x1406A62F0 (PsQuitNextProcessThread.c)
 *     MmPrefetchVirtualMemory @ 0x1406FB498 (MmPrefetchVirtualMemory.c)
 *     EtwWmitraceWorker @ 0x14093C914 (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // r14
  __int64 v1; // r15
  char v2; // r12
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  void *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rcx
  ULONG_PTR NextProcess; // rax
  _DWORD *v13; // r9
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  NTSTATUS v16; // eax
  unsigned __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h]
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v17 = ExpDebuggerPageIn;
  v18 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker(v6, v5, v7, v8);
  v9 = 0LL;
  if ( v0 || v1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v11);
      v9 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0LL, (__int64)&v19, v13);
        if ( v9 )
          goto LABEL_3;
        break;
      }
      v11 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_30;
      }
    }
    v14 = v1;
    if ( v0 )
      v14 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v14, v17, v18, v19, v20, v21);
  }
LABEL_3:
  v10 = v17;
  if ( v17 )
  {
    if ( MmIsSessionAddress(v17) )
      v15 = -3LL;
    else
      v15 = -(__int64)(v17 < 0xFFFF800000000000uLL);
    v16 = MmPrefetchVirtualMemory(v15, 1uLL, (__int64)&v17, v4);
    if ( v16 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v16);
    v10 = v17;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v10 = v17;
  }
  if ( v0 || v1 || v10 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v9 )
  {
    KiUnstackDetachProcess((__int64)&v19, 0);
LABEL_30:
    PsQuitNextProcessThread(v9);
  }
}
