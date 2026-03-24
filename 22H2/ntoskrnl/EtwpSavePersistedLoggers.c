/*
 * XREFs of EtwpSavePersistedLoggers @ 0x14094925C
 * Callers:
 *     EtwpKsrCallback @ 0x140948770 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14039AD70 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x14094928C (EtwpSavePersistedLoggersWorker.c)
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
