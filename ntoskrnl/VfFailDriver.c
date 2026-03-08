/*
 * XREFs of VfFailDriver @ 0x1405CBFB0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDriver(ULONG a1, unsigned int a2)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
    return VerifierBugCheckIfAppropriate(a1, a2, 0LL, 0LL, 0LL);
  return result;
}
