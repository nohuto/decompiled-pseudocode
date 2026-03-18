/*
 * XREFs of PpmConvertTimeFrom @ 0x1403D81D0
 * Callers:
 *     PopIdleWakeInitialize @ 0x140855C88 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x140855D7C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeFrom(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
