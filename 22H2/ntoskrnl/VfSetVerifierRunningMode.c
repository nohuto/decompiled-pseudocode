/*
 * XREFs of VfSetVerifierRunningMode @ 0x140ADBD3C
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140ADE920 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
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
  dword_140C139E4 = a1;
  return result;
}
