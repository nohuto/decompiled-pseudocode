/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x140906060
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14060A430 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloState @ 0x14023C5EC (PsGetServerSiloState.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
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
