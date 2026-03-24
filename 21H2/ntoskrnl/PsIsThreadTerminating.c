/*
 * XREFs of PsIsThreadTerminating @ 0x1402754A0
 * Callers:
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
