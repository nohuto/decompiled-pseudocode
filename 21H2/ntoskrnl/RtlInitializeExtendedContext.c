/*
 * XREFs of RtlInitializeExtendedContext @ 0x1402764F0
 * Callers:
 *     KiRaiseException @ 0x140521E90 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140525194 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspInitializeThunkContext @ 0x140647A20 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406960CC (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E844 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090F1A4 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140276D30 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x140276FC0 (RtlInitializeExtendedContext2.c)
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
