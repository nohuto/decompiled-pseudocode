/*
 * XREFs of PpmConvertTimeFrom @ 0x1403A4058
 * Callers:
 *     PopIdleWakeInitialize @ 0x14084E198 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x14084E28C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeFrom(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
