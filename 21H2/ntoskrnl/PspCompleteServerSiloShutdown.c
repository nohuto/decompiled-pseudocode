/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140905F00
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1406ABD40 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x1402BDFAC (PsGetServerSiloState.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 143) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 145) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 146) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1144), DelayedWorkQueue);
}
