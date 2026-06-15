/*
 * XREFs of sub_18004D220 @ 0x18004D220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D220(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = off_180154C10;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  return a2;
}
