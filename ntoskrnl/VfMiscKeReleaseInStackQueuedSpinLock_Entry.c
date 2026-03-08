/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140ADCF50
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscCheckKeLowerIrql @ 0x140ADE308 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseInStackQueuedSpinLock_Entry(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR *v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  v3 = (ULONG_PTR *)(a1 + 8);
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, *v3, 0LL);
  LOBYTE(a1) = CurrentIrql;
  LOBYTE(a2) = *(_BYTE *)(*v3 + 16);
  return ViMiscCheckKeLowerIrql(a1, a2);
}
