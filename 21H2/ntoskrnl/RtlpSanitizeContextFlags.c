/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140276574
 * Callers:
 *     KiRaiseException @ 0x140521E90 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140525194 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408BE180 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE43C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408BE5F0 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408BE85C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140907010 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140276D30 (RtlpValidateContextFlags.c)
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
