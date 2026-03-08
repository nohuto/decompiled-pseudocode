/*
 * XREFs of EtwpSavePersistedLoggers @ 0x1409EB1E4
 * Callers:
 *     EtwpKsrCallback @ 0x1409EA6F0 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140380700 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1409EB214 (EtwpSavePersistedLoggersWorker.c)
 */

char EtwpSavePersistedLoggers()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange(&EtwpLoggerSaveState, 1, 0);
    if ( !v0 )
      LOBYTE(v0) = EtwpSavePersistedLoggersWorker();
  }
  return v0;
}
