/*
 * XREFs of PspQueryHwTracingThread @ 0x1409AB510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PspQueryHwTracingThread(__int64 a1)
{
  return (*(_DWORD *)(a1 + 592) & 0x100) == 0;
}
