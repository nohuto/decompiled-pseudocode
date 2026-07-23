/*
 * XREFs of PsQuitNextPartition @ 0x140584500
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140955F20 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
