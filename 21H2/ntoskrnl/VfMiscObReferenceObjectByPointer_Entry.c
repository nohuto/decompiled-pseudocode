/*
 * XREFs of VfMiscObReferenceObjectByPointer_Entry @ 0x140AA47B0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfMiscObReferenceObjectByPointer_Entry(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // r8

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v3 - 48) )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, v3, 1uLL, 0LL);
  return result;
}
