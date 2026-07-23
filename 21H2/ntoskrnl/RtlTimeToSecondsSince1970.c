/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x140585560
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x140234114 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER v3; // r10

  v2.QuadPart = *(_QWORD *)&RtlExtendedMagicDivide(*Time, Magic10000000, 23) - SecondsToStartOf1970;
  if ( v2.HighPart )
    return 0;
  *(_DWORD *)v3.QuadPart = v2.LowPart;
  return 1;
}
