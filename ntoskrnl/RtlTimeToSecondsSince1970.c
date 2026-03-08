/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x14045B4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x1402D17E4 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER v3; // r11

  v2.QuadPart = *(_QWORD *)&RtlExtendedMagicDivide(*Time, Magic10000000, 23) - SecondsToStartOf1970;
  if ( v2.HighPart )
    return 0;
  *(_DWORD *)v3.QuadPart = v2.LowPart;
  return 1;
}
