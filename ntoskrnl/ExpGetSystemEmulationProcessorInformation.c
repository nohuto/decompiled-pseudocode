/*
 * XREFs of ExpGetSystemEmulationProcessorInformation @ 0x1403000A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 */

__int64 __fastcall ExpGetSystemEmulationProcessorInformation(__int64 a1)
{
  *(_WORD *)a1 = 0;
  *(_WORD *)(a1 + 2) = KeProcessorLevel;
  *(_WORD *)(a1 + 4) = KeProcessorRevision;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}
