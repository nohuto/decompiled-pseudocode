/*
 * XREFs of VfSetVerifierRunningMode @ 0x1409D9810
 * Callers:
 *     VfSetVerifierInformationEx @ 0x1409ECD04 (VfSetVerifierInformationEx.c)
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
  dword_140C2A95C = a1;
  return result;
}
