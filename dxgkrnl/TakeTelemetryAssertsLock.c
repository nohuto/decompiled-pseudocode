__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex((PFAST_MUTEX)g_AssertFastMutex);
  return 0LL;
}
