/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x1409A9AC8
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1406F8A00 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x1403552EC (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 167) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 169) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 170) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1336), DelayedWorkQueue);
}
