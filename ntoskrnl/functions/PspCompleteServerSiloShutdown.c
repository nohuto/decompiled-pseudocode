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
