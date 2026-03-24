/*
 * XREFs of PsQuitNextPartition @ 0x1405842D0
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140955D50 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x14099568C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
