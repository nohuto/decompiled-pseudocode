/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140995540
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x14086E7F0 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, &v3, v4) >= 0 )
  {
    v1 = v3;
    if ( v3 <= 2 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PopEsMode = v1;
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      PopEsWorkItemSchedule(2);
    }
  }
  return 0LL;
}
