/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x140264560
 * Callers:
 *     RtlUnwind @ 0x14024EF80 (RtlUnwind.c)
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1402621C0 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x140263510 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402639D0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength @ 0x140264410 (RtlGetExtendedContextLength.c)
 *     NtCreateThreadEx @ 0x14063D5C0 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1402445D0 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpGetLegacyContextLength @ 0x140264610 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-14h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10[0] = 0;
  v9 = 0;
  v11 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v10);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(ContextFlags, &v11, &v9);
    v7 = v9;
    v8 = v11 + 24;
    if ( (v10[0] & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        EnabledExtendedFeatures &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
      v8 = (~(v7 - 1) & (v8 + v7 - 1)) - v7 - 448 + RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures);
    }
    *ContextLength = v7 + v8 - 1;
    return 0;
  }
  return result;
}
