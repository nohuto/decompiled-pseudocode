/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140264514
 * Callers:
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405253D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408BE2E0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE59C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408BE750 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408BE9BC (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140907170 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*a1 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( a2 )
    {
      *a1 = *a1 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
