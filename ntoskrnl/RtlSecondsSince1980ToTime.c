/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x1405A51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (SecondsToStartOf1980 + ElapsedSeconds);
}
