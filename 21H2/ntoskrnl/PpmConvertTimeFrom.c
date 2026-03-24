/*
 * XREFs of PpmConvertTimeFrom @ 0x1403C94E4
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407C6F38 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407C702C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x14027C22C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeFrom(ULONGLONG a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
