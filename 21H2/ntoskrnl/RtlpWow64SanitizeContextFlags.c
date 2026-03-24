/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x140696810
 * Callers:
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406960CC (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140276D30 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x140696C94 (RtlpArchContextFlagFromMachine.c)
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
