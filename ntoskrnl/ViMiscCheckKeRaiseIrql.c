/*
 * XREFs of ViMiscCheckKeRaiseIrql @ 0x140ADE3AC
 * Callers:
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140ABD850 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeSynchronizeExecution_Entry @ 0x140ADD0C0 (VfMiscKeSynchronizeExecution_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMiscCheckKeRaiseIrql(unsigned __int8 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rdi

  v1 = a1;
  result = KeGetCurrentIrql();
  v3 = (unsigned __int8)result;
  if ( (unsigned __int8)result > a1 )
    result = VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, (unsigned __int8)result, a1, 0LL);
  if ( (unsigned __int8)v1 > 0xFu )
    return VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, v3, v1, 0LL);
  return result;
}
