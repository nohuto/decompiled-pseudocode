/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x1405F5D60
 * Callers:
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1405F61E4 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(int *a1, char a2)
{
  int v4; // edi
  __int64 result; // rax

  v4 = RtlpArchContextFlagFromMachine(332LL);
  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (v4 & *a1) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( a2 )
    {
      *a1 = (v4 | *a1) & 0xD801007F;
      return 0LL;
    }
  }
  return result;
}
