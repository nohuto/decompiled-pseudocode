__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock(&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
