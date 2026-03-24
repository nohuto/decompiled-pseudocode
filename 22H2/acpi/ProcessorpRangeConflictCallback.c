/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1C00B6ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ProcessorpRangeConflictCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // eax
  bool result; // al

  v2 = *(_QWORD *)(a2 + 16);
  result = v2
        && (*(_BYTE *)(a2 + 33) & 1) != 0
        && *(_BYTE *)(a1 + 14)
        && *(_QWORD *)a1 != *(_QWORD *)(a2 + 24)
        && ((v3 = *(_DWORD *)(a1 + 8), v4 = *(_DWORD *)(v2 + 16), v3 == v4) || v3 >= 0xFFF00000 && v4 >= 0xFFF00000)
        && ((*(_WORD *)(a1 + 12) & 1) == 0 || (*(_BYTE *)(a2 + 32) & 2) != 0)
        && ((*(_WORD *)(a1 + 12) & 1) != 0 || (*(_BYTE *)(a2 + 32) & 1) != 0);
  return result;
}
