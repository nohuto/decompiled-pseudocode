/*
 * XREFs of ViMiscCheckKeLowerIrql @ 0x140ADE308
 * Callers:
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140ADCF50 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseQueuedSpinLock_Entry @ 0x140ADCFD0 (VfMiscKeReleaseQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140ADD010 (VfMiscKeReleaseSpinLock_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall ViMiscCheckKeLowerIrql(unsigned __int8 a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a2;
  v4 = a1;
  if ( a1 < a2 )
    LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
  if ( (unsigned __int8)v4 < 2u || (unsigned __int8)v3 >= 2u )
  {
    if ( (unsigned __int8)v3 > 0xFu )
      LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v4, v3, 0LL);
  }
  else
  {
    LOBYTE(v2) = KeGetPcr()->Prcb.DpcRequestSummary;
    if ( ((unsigned __int8)v2 & 1) != 0 )
      LOBYTE(v2) = VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v4, v3, 1LL);
  }
  return (char)v2;
}
