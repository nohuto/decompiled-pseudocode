/*
 * XREFs of DbgkpInitializePhase1 @ 0x140B6C3E4
 * Callers:
 *     DbgkInitialize @ 0x140B524F0 (DbgkInitialize.c)
 * Callees:
 *     DbgkpGetServerSiloState @ 0x140858F68 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase1SiloState @ 0x140858F94 (DbgkpInitializePhase1SiloState.c)
 */

__int64 DbgkpInitializePhase1()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
