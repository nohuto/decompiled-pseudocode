/*
 * XREFs of IopDoesCompletionNeedsApc @ 0x140552F8C
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1402C80C0 (IoGetRequestorProcess.c)
 */

bool __fastcall IopDoesCompletionNeedsApc(__int64 a1)
{
  int v1; // eax
  bool result; // al

  result = (*(_BYTE *)(a1 + 16) & 0x50) == 0x50
        && (v1 = *(_DWORD *)(a1 + 48), v1 != -2147483626)
        && (v1 & 0xC0000000) != 0xC0000000
        && IoGetRequestorProcess((PIRP)a1) != KeGetCurrentThread()->ApcState.Process;
  return result;
}
