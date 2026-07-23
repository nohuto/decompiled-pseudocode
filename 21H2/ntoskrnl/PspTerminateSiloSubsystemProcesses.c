/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x140906F44
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409060C0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetProcessSessionId @ 0x140285D20 (PsGetProcessSessionId.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 */

void *__fastcall PspTerminateSiloSubsystemProcesses(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  _KPROCESS *i; // r9
  int Flink_high; // edx
  unsigned int ProcessSessionId; // eax
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v8; // rbx
  void *result; // rax
  struct _LIST_ENTRY *v10; // rcx
  _KPROCESS *v11; // r8
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v14, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, &v12, i);
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
  result = PsGetServerSiloGlobals((__int64)a1);
  v11 = (_KPROCESS *)*((_QWORD *)result + 110);
  if ( v11 )
    return (void *)PspShutdownCsrProcess(v10, **((_DWORD **)result + 141), v11);
  return result;
}
