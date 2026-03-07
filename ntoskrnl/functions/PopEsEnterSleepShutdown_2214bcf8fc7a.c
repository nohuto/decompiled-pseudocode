void PopEsEnterSleepShutdown()
{
  __int64 v0; // rdx
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, sizeof(v1));
  PopCurrentPowerState(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v1, v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
