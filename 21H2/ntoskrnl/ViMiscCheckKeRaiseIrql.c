/*
 * XREFs of ViMiscCheckKeRaiseIrql @ 0x140AA568C
 * Callers:
 *     VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry @ 0x140AA3FF0 (VfMiscKeAcquireInStackQueuedSpinLockRaiseToSynch_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLock_Entry @ 0x140AA4030 (VfMiscKeAcquireInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeAcquireQueuedSpinLockRaiseToSynch_Entry @ 0x140AA4070 (VfMiscKeAcquireQueuedSpinLockRaiseToSynch_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140AA4090 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeRaiseIrqlToDpcLevel_Entry @ 0x140AA4180 (VfMiscKeRaiseIrqlToDpcLevel_Entry.c)
 *     VfMiscKeSynchronizeExecution_Entry @ 0x140AA4360 (VfMiscKeSynchronizeExecution_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
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
