/*
 * XREFs of RtlInitializeExtendedContext @ 0x14033F500
 * Callers:
 *     KiRaiseException @ 0x140521DD0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405250D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x14067A4EC (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E894 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090F1F4 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
 *     RtlInitializeExtendedContext2 @ 0x14033FFD0 (RtlInitializeExtendedContext2.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v5; // rbx
  NTSTATUS result; // eax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v8);
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v5);
  }
  return result;
}
