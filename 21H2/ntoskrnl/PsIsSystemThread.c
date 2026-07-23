/*
 * XREFs of PsIsSystemThread @ 0x140230130
 * Callers:
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
