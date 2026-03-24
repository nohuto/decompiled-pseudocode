/*
 * XREFs of VfSetVerifierRunningMode @ 0x1409D9800
 * Callers:
 *     VfSetVerifierInformationEx @ 0x1409ECCF4 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
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
  dword_140C2A8DC = a1;
  return result;
}
