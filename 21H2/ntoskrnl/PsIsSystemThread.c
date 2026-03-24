/*
 * XREFs of PsIsSystemThread @ 0x1402B1F80
 * Callers:
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
