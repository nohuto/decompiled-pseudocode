/*
 * XREFs of sub_180121D90 @ 0x180121D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180121A98 @ 0x180121A98 (sub_180121A98.c)
 */

void __fastcall sub_180121D90(__int64 a1)
{
  sub_180121A98(*(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
