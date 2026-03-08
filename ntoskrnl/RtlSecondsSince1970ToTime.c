/*
 * XREFs of RtlSecondsSince1970ToTime @ 0x1403AB2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1970ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (SecondsToStartOf1970 + ElapsedSeconds);
}
