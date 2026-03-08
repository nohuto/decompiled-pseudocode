/*
 * XREFs of HvAddToLayoutStats @ 0x1406ED3F0
 * Callers:
 *     HvCheckBin @ 0x1406ED190 (HvCheckBin.c)
 *     HvCheckHive @ 0x1407A6080 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
