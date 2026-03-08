/*
 * XREFs of EtwpIsWow64Logger @ 0x14077341C
 * Callers:
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140772F04 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
