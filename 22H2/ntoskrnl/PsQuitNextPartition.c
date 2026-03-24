/*
 * XREFs of PsQuitNextPartition @ 0x140584210
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140955DA0 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140990BDC (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
