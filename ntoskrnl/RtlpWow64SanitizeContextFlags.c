/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x14077C55C
 * Callers:
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x14077C9E4 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(int *a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax

  v4 = RtlpArchContextFlagFromMachine(332LL);
  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (v4 & *a1) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = (*a1 | v4) & 0xD801007F;
    return 0LL;
  }
  return result;
}
