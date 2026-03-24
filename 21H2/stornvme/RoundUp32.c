/*
 * XREFs of RoundUp32 @ 0x1C0007BE8
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundUp32(unsigned int a1)
{
  if ( a1 % 0xA )
    a1 += 10 - a1 % 0xA;
  return a1;
}
