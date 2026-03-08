/*
 * XREFs of VfFailSystemBIOS @ 0x1405CBFE0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailSystemBIOS(ULONG a1, unsigned int a2)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
  {
    if ( (MmVerifierData & 0x40000000) != 0 )
      return VerifierBugCheckIfAppropriate(a1, a2, 0LL, 0LL, 0LL);
  }
  return result;
}
