/*
 * XREFs of RtlInitializeExtendedContext @ 0x140295100
 * Callers:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x140298420 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576820 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057C724 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140704EF8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B4D94 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140297D10 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x140297F80 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags(a2, &v8);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(a1, a2, a3, v5);
  }
  return result;
}
