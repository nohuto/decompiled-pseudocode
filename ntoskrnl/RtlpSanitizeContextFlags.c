/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140364D9C
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     NtCreateThread @ 0x1409AAD10 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (*a1 & 0x100000) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = *a1 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return result;
}
