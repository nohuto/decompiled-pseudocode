/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x140998430
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x140998460 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
