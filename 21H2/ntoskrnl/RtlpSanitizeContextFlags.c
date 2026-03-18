/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140298720
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140298420 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576820 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057C724 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     NtCreateThread @ 0x1409ACDC0 (NtCreateThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  unsigned int v2; // eax

  v2 = *a1;
  if ( (*a1 & 0x10000) != 0 && (v2 & 0x27FEFF80) == 0
    || (v2 & 0x7FFFF20) == 0x100000
    || (v2 & 0x7FFFFF0) == 0x200000
    || (v2 & 0x7FFFFE0) == 0x400000 )
  {
    if ( ((v2 & 0x100040) == 1048640 || (v2 & 0x10040) == 65600) && !MEMORY[0xFFFFF780000003D8]
      || (v2 & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    {
      return 3221225659LL;
    }
    if ( (v2 & 0x100000) != 0 )
      return 0LL;
  }
  if ( a2 )
  {
    *a1 = v2 & 0xF800001F | 0x100000;
    return 0LL;
  }
  return 3221225485LL;
}
