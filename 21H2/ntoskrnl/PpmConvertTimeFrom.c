/*
 * XREFs of PpmConvertTimeFrom @ 0x1403C9684
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407C7258 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407C734C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeFrom(ULONGLONG a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
