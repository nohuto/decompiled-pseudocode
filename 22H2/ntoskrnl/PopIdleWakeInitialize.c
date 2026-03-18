/*
 * XREFs of PopIdleWakeInitialize @ 0x1408515D8
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403A8E68 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1408516CC (PopIdleWakeConvertIntervalBucketsFrom.c)
 */

__int64 PopIdleWakeInitialize()
{
  __int64 result; // rax

  PopIdleWakeContextLock = 0LL;
  PopIdleWakeSourceSpuriousThresholdQpc = PpmConvertTimeFrom(0x2FAF080uLL, 0x989680uLL);
  PopIdleWakeConvertIntervalBucketsFrom(
    6LL,
    PopIdleSpuriousWakeBucketLimitsQpc,
    PopIdleSpuriousWakeBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5LL,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    3LL,
    &PopIdleWakeSourceExcessBucketLimitsQpc,
    &PopIdleWakeSourceExcessBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    9LL,
    &PopIdleWakeIdleAccountingBucketLimitsMs,
    PopIdleWakeIdleAccountingBucketLimitsQpc,
    1000LL);
  qword_140C39E48 = -1LL;
  result = PopIdleWakeConvertIntervalBucketsFrom(
             11LL,
             &PopIdleWakePeriodAccountingBucketLimitsMs,
             PopIdleWakePeriodAccountingBucketLimitsQpc,
             1000LL);
  qword_140C39EB8 = -1LL;
  return result;
}
