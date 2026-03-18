/*
 * XREFs of VfMiscObfReferenceObject_Exit @ 0x140AA4820
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfMiscObfReferenceObject_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) == 1LL )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, *(_QWORD *)(a1 + 8), 1uLL, 0LL);
  return result;
}
