/*
 * XREFs of PopEsWorker @ 0x140873B60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopEsUpdateState @ 0x1403C5BF4 (PopEsUpdateState.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 *     PopEsUpdateSetting @ 0x140861DA0 (PopEsUpdateSetting.c)
 *     PopEsStartTelemetry @ 0x140863BD4 (PopEsStartTelemetry.c)
 *     PopEsPublishState @ 0x140864600 (PopEsPublishState.c)
 */

void PopEsWorker()
{
  char v0; // bl
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // edx

  do
  {
    do
    {
      v0 = 0;
      _m_prefetchw(&PopEsWorkItemDue);
      v1 = PopEsWorkItemDue;
      do
      {
        v2 = v1;
        v1 = _InterlockedCompareExchange(&PopEsWorkItemDue, v1, v1);
      }
      while ( v2 != v1 );
      _BitScanForward(&v3, v1);
      v4 = 1 << v3;
      v5 = v1 & ~(1 << v3);
      if ( (v5 & 8) != 0 && ((v4 - 2) & 0xFFFFFFFD) == 0 )
      {
        v0 = 1;
        v5 &= ~8u;
      }
      v6 = v5 & 0xFFFFFFFB;
      if ( v4 != 2 )
        v6 = v5;
    }
    while ( v1 != _InterlockedCompareExchange(&PopEsWorkItemDue, v6, v1) );
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 2 )
          continue;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      }
      else
      {
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        PopEsUpdateSetting();
      }
      PopEsUpdateState(v0);
      PopReleaseRwLock(&PopEsLock);
    }
    else
    {
      PopEsPublishState();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PopEsStartTelemetry();
      PopReleaseRwLock(&PopEsLock);
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionOverride,
        (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE,
        1,
        0,
        (__int64)PopEsWnfSubscriptionOverrideCallback,
        0LL);
    }
  }
  while ( v6 );
}
