/*
 * XREFs of PsIsThreadTerminating @ 0x140263440
 * Callers:
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
