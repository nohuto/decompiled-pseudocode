/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140905F50
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14068ECF0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     PsGetServerSiloState @ 0x14034D18C (PsGetServerSiloState.c)
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
