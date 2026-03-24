/*
 * XREFs of RtlpSanitizeContextFlags @ 0x14033F584
 * Callers:
 *     KiRaiseException @ 0x140521DD0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405250D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x1408BE1D0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE48C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1408BE640 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408BE8AC (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x140907060 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
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
