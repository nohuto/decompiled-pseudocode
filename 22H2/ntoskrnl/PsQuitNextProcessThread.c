/*
 * XREFs of PsQuitNextProcessThread @ 0x140885C40
 * Callers:
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
