/*
 * XREFs of RtlInitializeExtendedContext @ 0x140364A10
 * Callers:
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     PspSetContextState @ 0x1409B51B8 (PspSetContextState.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
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
