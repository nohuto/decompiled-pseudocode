/*
 * XREFs of VfSetVerifierRunningMode @ 0x140AD7D3C
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140ADA920 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140C138A4 = a1;
  return result;
}
