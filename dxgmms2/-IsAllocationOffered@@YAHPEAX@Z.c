/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C00C4A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[114] != 4 && *(_WORD *)(*((_QWORD *)a1 + 67) + 4LL) == 2;
}
