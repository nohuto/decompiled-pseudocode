/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140AA41F0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscCheckKeLowerIrql @ 0x140AA55E8 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseInStackQueuedSpinLock_Entry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  LOBYTE(a1) = CurrentIrql;
  LOBYTE(a2) = *(_BYTE *)(*(_QWORD *)(v2 + 8) + 16LL);
  return ViMiscCheckKeLowerIrql(a1, a2);
}
