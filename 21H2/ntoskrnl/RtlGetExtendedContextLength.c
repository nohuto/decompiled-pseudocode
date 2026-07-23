/*
 * XREFs of RtlGetExtendedContextLength @ 0x140264410
 * Callers:
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405253D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x14063C810 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14090F304 (PspSetContextState.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x140264560 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
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
