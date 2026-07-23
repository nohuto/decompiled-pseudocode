/*
 * XREFs of RtlGetExtendedContextLength @ 0x14033F480
 * Callers:
 *     KiRaiseException @ 0x140521DD0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405250D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x14067A4EC (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1406C2670 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E894 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090F1F4 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14033F5D0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  ULONG64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags(ContextFlags, &v6);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v3);
  }
  return result;
}
