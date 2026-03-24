/*
 * XREFs of RtlGetExtendedContextLength @ 0x140276470
 * Callers:
 *     KiRaiseException @ 0x140521E90 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140525194 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspInitializeThunkContext @ 0x140647A20 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1406498B0 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406960CC (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E844 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090F1A4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402765C0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x140276D30 (RtlpValidateContextFlags.c)
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
