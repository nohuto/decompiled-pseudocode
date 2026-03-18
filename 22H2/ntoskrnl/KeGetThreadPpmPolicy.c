/*
 * XREFs of KeGetThreadPpmPolicy @ 0x140576D2C
 * Callers:
 *     PspGetThreadPpmPolicy @ 0x1409AE538 (PspGetThreadPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return (*(_DWORD *)(a1 + 956) >> 8) & 7;
}
