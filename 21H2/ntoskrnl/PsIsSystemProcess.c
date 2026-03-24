/*
 * XREFs of PsIsSystemProcess @ 0x14025C0F0
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2172) & 0x1000) != 0;
}
