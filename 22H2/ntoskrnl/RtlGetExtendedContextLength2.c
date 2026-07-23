/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x14033F5D0
 * Callers:
 *     RtlUnwind @ 0x140329E00 (RtlUnwind.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x14033E580 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x1406C1590 (NtCreateThreadEx.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x14031F250 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpGetLegacyContextLength @ 0x14033F680 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
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
