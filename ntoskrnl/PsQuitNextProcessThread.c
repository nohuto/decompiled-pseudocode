/*
 * XREFs of PsQuitNextProcessThread @ 0x140880E60
 * Callers:
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
