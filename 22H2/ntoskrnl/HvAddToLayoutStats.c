/*
 * XREFs of HvAddToLayoutStats @ 0x140745EE0
 * Callers:
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvCheckBin @ 0x140745C80 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
