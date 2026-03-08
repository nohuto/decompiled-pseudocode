/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsGetProcessSessionId @ 0x140299380 (PsGetProcessSessionId.c)
 *     PspGetNextJobProcess @ 0x1406F90E0 (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 */

int __fastcall PspTerminateSiloSubsystemProcesses(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  int Flink_high; // edx
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v8; // rbx
  void *ServerSiloGlobals; // rax
  struct _LIST_ENTRY *v10; // rcx
  _KPROCESS *v11; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v15, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, &v13, i);
    v8 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    Flink_high = HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink);
    if ( ((Flink_high & 0x40) != 0 || (NextJobProcess[1].DirectoryTableBase & 1) == 0) && (Flink_high & 0x1000) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)NextJobProcess);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess(a1, ProcessSessionId, v8);
    }
  }
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  v11 = (_KPROCESS *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v11 )
    LODWORD(ServerSiloGlobals) = PspShutdownCsrProcess(v10, **((_DWORD **)ServerSiloGlobals + 165), v11);
  return (int)ServerSiloGlobals;
}
