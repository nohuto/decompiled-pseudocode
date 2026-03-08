/*
 * XREFs of RtlGetExtendedContextLength @ 0x140364A90
 * Callers:
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     PspSetContextState @ 0x1409B51B8 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  v4 = a1;
  result = RtlpValidateContextFlags(a1, &v6);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(v4, a2, v3);
  }
  return result;
}
