__int64 __fastcall EtwInitializeSiloState(struct _LIST_ENTRY *a1)
{
  unsigned int CurrentSiloMaxLoggers; // eax
  int v3; // ebx
  PVOID *ServerSiloGlobals; // rax

  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  v3 = EtwpPreInitializeSiloState((__int64)a1, CurrentSiloMaxLoggers);
  if ( v3 < 0 || (v3 = EtwpInitializeSiloState(a1, 0LL), v3 < 0) )
  {
    ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals((__int64)a1);
    EtwpCleanupSiloState(ServerSiloGlobals[108]);
  }
  return (unsigned int)v3;
}
