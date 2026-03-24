/*
 * XREFs of PsIsThreadTerminating @ 0x14033E4B0
 * Callers:
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
