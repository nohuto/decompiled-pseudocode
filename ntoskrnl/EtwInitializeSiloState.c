/*
 * XREFs of EtwInitializeSiloState @ 0x1409DF038
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403AEC3C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x14084497C (EtwpPreInitializeSiloState.c)
 *     EtwpCleanupSiloState @ 0x1409E04E0 (EtwpCleanupSiloState.c)
 */

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
