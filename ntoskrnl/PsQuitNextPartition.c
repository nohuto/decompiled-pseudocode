/*
 * XREFs of PsQuitNextPartition @ 0x1405A4180
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x1409FD980 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
