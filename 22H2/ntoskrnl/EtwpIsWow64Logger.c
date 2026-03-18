/*
 * XREFs of EtwpIsWow64Logger @ 0x1407F80FC
 * Callers:
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1407F7BE4 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
